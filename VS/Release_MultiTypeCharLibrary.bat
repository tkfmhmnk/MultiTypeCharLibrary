mkdir MultiTypeCharLibrary
mkdir MultiTypeCharLibrary\lib
mkdir MultiTypeCharLibrary\lib\x86
mkdir MultiTypeCharLibrary\lib\x86\Debug
mkdir MultiTypeCharLibrary\lib\x86\Release
mkdir MultiTypeCharLibrary\lib\x64
mkdir MultiTypeCharLibrary\lib\x64\Debug
mkdir MultiTypeCharLibrary\lib\x64\Release
mkdir MultiTypeCharLibrary\include
mkdir MultiTypeCharLibrary\PropertySheet

copy Debug\mtcFileIO.* MultiTypeCharLibrary\lib\x86\Debug
copy Release\mtcFileIO.* MultiTypeCharLibrary\lib\x86\Release

copy x64\Debug\mtcFileIO.* MultiTypeCharLibrary\lib\x64\Debug
copy x64\Release\mtcFileIO.* MultiTypeCharLibrary\lib\x64\Release

copy mtcFileIO\mtcFileIO.h MultiTypeCharLibrary\include

copy MultiTypeCharLibrary.props MultiTypeCharLibrary\PropertySheet
copy mtcFileIO\mtcFileIO.props MultiTypeCharLibrary\PropertySheet

del MultiTypeCharLibrary.zip
powershell compress-archive MultiTypeCharLibrary MultiTypeCharLibrary.zip
pause
rmdir /s /q MultiTypeCharLibrary
pause