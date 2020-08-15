# compiling samples with MSVC
* c++17
* standard exception handling
* standards conforming
* disable two-phase name lookup (nonconforming)
* enable warnings

```
$ cl /std:c++17 /EHsc /permissive- /Zc:twoPhase- /W4 filename.cpp
```
