cpp_code = '''
#include <string>

const std::string anecdote = "Идет медведь по лесу, видит, машина горит. Сел в нее и сгорел";
'''

if __name__ == "__main__":
	with open("index.h", 'w+') as file:
		file.write(cpp_code)