#include <iostream>
#include <vector>
#include "config_parse.hpp"
#include <cassert>

using namespace std;

int main()
{
  ConfigParse cp("test.ini");
  
  // test section count
  vector<string> sections = cp.get_sections();
  assert(sections.size() == 3);
  assert(cp.get_value("section 1", "name1") == "value1");
  assert(cp.get_value("section 2", "does not exist") == "");
  assert(cp.get_value("section 3", "name5") == "value5");
  assert(cp.get_value("section 3", "does not exist") == "");
  assert(cp.get_value("does not exist", "name") == "");

  assert(cp.begin("section 2") == cp.end("section 2"));
  
  
  cout << "\n---- Tests Pass ----\n\n";
  
  return (0);
}
