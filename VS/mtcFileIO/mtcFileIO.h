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
			None,								//!<�G���f�B�A������
			BE,									//!<�r�b�O�G���f�B�A��
			LE									//!<���g���G���f�B�A��
		};
		enum class Ret : int {
			Unknown = 0,
			OK,									//!<����
			SrcFile_OpenErr,					//!<�\�[�X�t�@�C���̃I�[�v���G���[
			SrcFile_UnknownBom,					//!<�\�[�X�t�@�C���̕s����BOM
			SrcFileStream_BadStatus,			//!<�\�[�X�t�@�C���̃X�g���[���̃G���[
			DesFile_OpenErr,					//!<�o�̓t�@�C���̃I�[�v���G���[
			SrcStringStream_BadStatus,			//!<����StringStream�̃X�g���[���̃G���[
			DesFileStream_BadStatus,			//!<�o�̓t�@�C���̃X�g���[���̃G���[
			DesFile_UnknownBom,					//!<�o�̓t�@�C���̕s����BOM
			MemoryAllocationErr,				//!<�������m�ۂ̃G���[
			NullPointerRefernce,				//!<�����̃|�C���^��Null
			InvalidStreamObject,				//!<�s���ȃX�g���[����object���^����ꂽ
			BufferErr,							//!<�o�b�t�@�T�C�Y�̕s��
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