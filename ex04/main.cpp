#include <iostream>
#include <fstream>


static void foo()
{
	system("leaks -q losers");
}

struct stContent
{
	std::string filename;
	std::string s1;
	std::string s2;
};

static void Display(std::string message)
{
	std::cout << message << std::endl << std::endl;
}

static int ft_perror(std::string message)
{
	std::cerr << message << std::endl;
	return EXIT_FAILURE;
}


// static std::string ft_replace(std::string line, const std::string s1, const std::string s2)
// {
// 	std::string new_line;

// 	size_t	old_index = 0;
// 	size_t	new_index;

// 	while (old_index < line.length())
// 	{
// 		new_index = line.find(s1, old_index);

// 		new_line += line.substr(old_index, new_index - old_index);

// 		if (new_index == std::string::npos)
// 			break;
		
// 		new_line += s2;

// 		old_index = new_index + s1.length();
// 	}

// 	return new_line;
// }


static std::string ft_replace(std::string line, const std::string s1, const std::string s2)
{
	size_t pos = 0;

	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}
	return line;
}

static int FileConfiguration(stContent &content)
{
		std::string line;

	// std::ifstream is used for reading from files (input file stream)
	std::ifstream infile(content.filename.c_str());
	if (!infile.is_open())
		return ft_perror("Error: could not open input file. ");

	// std::ofstream is used for writing to files (output file stream)
	std::ofstream outfile((content.filename + ".replace").c_str());
	if (!outfile.is_open())
		return ft_perror("Error: could not open output file.");


	while (getline(infile, line))
		outfile << ft_replace(line, content.s1, content.s2) << std::endl;
	
	outfile.close();
	infile.close();

	// while (1);  lsof -p <pid> 
	return EXIT_SUCCESS;
}

int main(int ac, char **av)
{
	atexit(foo);

	if (ac != 4)
	{
		Display("Invalid Arguments : ./losers filename s1 s2");
		return EXIT_FAILURE;
	}

	stContent config;

	config.filename = av[1];
	config.s1 = av[2];
	config.s2 = av[3];

	return FileConfiguration(config);
}
