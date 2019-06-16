/*
Copyright [2019] [tkfmhmnk]

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

	   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _MTC_FILE_IO_H
#define _MTC_FILE_IO_H

#ifdef MTCFILEIO_EXPORTS
#define MTCFILEIO_ATTRBT __declspec(dllexport)
#else
#define MTCFILEIO_ATTRBT __declspec(dllimport)
#endif

#define MTCFILEIO_CALL __stdcall

#include <iostream>
#include <fstream>
#include<sstream>
#include <string>

namespace mtc {
	namespace FileIO {
		enum class Endian : int {
			None,								//!<エンディアン無し
			BE,									//!<ビッグエンディアン
			LE									//!<リトルエンディアン
		};
		enum class Ret : int {
			Unknown = 0,
			OK,									//!<成功
			SrcFile_OpenErr,					//!<ソースファイルのオープンエラー
			SrcFile_UnknownBom,					//!<ソースファイルの不明なBOM
			SrcFileStream_BadStatus,			//!<ソースファイルのストリームのエラー
			DesFile_OpenErr,					//!<出力ファイルのオープンエラー
			SrcStringStream_BadStatus,			//!<入力StringStreamのストリームのエラー
			DesFileStream_BadStatus,			//!<出力ファイルのストリームのエラー
			DesFile_UnknownBom,					//!<出力ファイルの不明なBOM
			MemoryAllocationErr,				//!<メモリ確保のエラー
			NullPointerRefernce,				//!<引数のポインタがNull
			InvalidStreamObject,				//!<不正なストリームのobjectが与えられた
			BufferErr,							//!<バッファサイズの不足
		};

		MTCFILEIO_ATTRBT Ret MTCFILEIO_CALL ReadString(const char* srcFileName, std::basic_stringstream<char16_t>& des, Endian& endian);
		MTCFILEIO_ATTRBT Ret MTCFILEIO_CALL WriteString(const char* desFileName, std::basic_stringstream<char16_t>& src, const Endian& endian);

		template<class StreamT> class MTCFILEIO_ATTRBT Manager {
		public:
			Ret MTCFILEIO_CALL OpenStream(const char* fileName, Endian _endian = Endian::None);
			Ret MTCFILEIO_CALL CloseStream();
			StreamT* pStream;
			Endian endian;
		private:
			static constexpr int bufSize = 1024;
			char* fileNameBuf;
		};
	}
}

#endif