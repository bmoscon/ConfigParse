##INI Config File Parser


Example usage:

```
ConfigParse cp("config.ini");

std::string value = cp.get_value("Section Name", "Name");
```

or, iterate over name-value pairs in a section:

```
ConfigParse::const_iterator it = cp.begin(SectionName);

while (it != cp.end(SectionName)) {
    std::cout << it->first << " = " << it->second << std::endl;
    ++it;
}
```

for complete list of methods/types, see config_parse.hpp
