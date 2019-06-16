mkdir MultiTypeChar
mkdir MultiTypeChar\lib
mkdir MultiTypeChar\lib\x86
mkdir MultiTypeChar\lib\x86\Debug
mkdir MultiTypeChar\lib\x86\Release
mkdir MultiTypeChar\lib\x64
mkdir MultiTypeChar\lib\x64\Debug
mkdir MultiTypeChar\lib\x64\Release
mkdir MultiTypeChar\include
mkdir MultiTypeChar\PropertySheet

copy Debug\mtcFileIO.* MultiTypeChar\lib\x86\Debug
copy Release\mtcFileIO.* MultiTypeChar\lib\x86\Release

copy x64\Debug\mtcFileIO.* MultiTypeChar\lib\x64\Debug
copy x64\Release\mtcFileIO.* MultiTypeChar\lib\x64\Release

copy mtcFileIO\mtcFileIO.h MultiTypeChar\include

copy mtcFileIO.props MultiTypeChar\PropertySheet

del MultiTypeChar.zip
powershell compress-archive MultiTypeChar MultiTypeChar.zip
pause
rmdir /s /q MultiTypeChar
pause