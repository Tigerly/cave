#ifndef TESTCASES_H
#define TESTCASES_H

#include <vector>

struct testcase
{
	char line[32];
	char result[32];

	testcase(const char*, const char*);
};

testcase::testcase(const char* in, const char* res)
{
	strncpy(line, in, 31);
	strncpy(result, res, 31);
	line[31] = '\0';
	result[31] = '\0';
}

std::vector<testcase> fact_tests = {
	testcase("(fact 1)", "1"),
	testcase("(fact 2)", "2"),
	testcase("(fact 5)", "120")
};

#endif
