#include "A/index.h"
#include "B/lib.h"

#include "gtest/tgest.h"

class ATest : public ::testing::Test {
public:
	static std::string ReturnAnecdote() {
		return anecdote;
	}
};

class BTest : public ::testing::Test {
public:
	static void PrintAnecdote() {
		PrintString(anecdote);
	}

	static void SaySomething(const std::string& current) {
		CowSay(current);
	}
};

TEST_F(ATest, gtests) {
	std::cout << "Проверим, что это точно анекдот про медведя" << std::endl;

	ASSERT_EQ(ATest::ReturnAnecdote(), "Идет медведь по лесу, видит, машина горит. Сел в нее и сгорел");
	
	std::cout << "(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧ magic" << std::endl;
	std::cout << "Да, это именно он" << std::endl;
}

TEST_F(BTest, gtests) {
	std::cout << "Расскажем анекдот" << std::endl;
	
	BTest::PrintAnecdote();

	std::cout << "＼(￣▽￣)／" << std::endl;

	std::cout << "Пора прощаться" << std::endl;
	BTest::SaySomething("До новых встреч!");
}
