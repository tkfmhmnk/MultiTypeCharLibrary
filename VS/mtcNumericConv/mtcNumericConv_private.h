/*
Copyright 2019 tkfmhmnk

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

#ifndef _MTC_NUMERIC_CONV_PRIVATE_H
#define _MTC_NUMERIC_CONV_PRIVATE_H

#include"mtcLiteral.h"
namespace mtc {
	namespace NumericConv {
		namespace _private {

			MULTITYPE_CSTR(
				hexTable,
				_MULTITYPE_STR("00"),
				_MULTITYPE_STR("01"),
				_MULTITYPE_STR("02"),
				_MULTITYPE_STR("03"),
				_MULTITYPE_STR("04"),
				_MULTITYPE_STR("05"),
				_MULTITYPE_STR("06"),
				_MULTITYPE_STR("07"),
				_MULTITYPE_STR("08"),
				_MULTITYPE_STR("09"),
				_MULTITYPE_STR("0A"),
				_MULTITYPE_STR("0B"),
				_MULTITYPE_STR("0C"),
				_MULTITYPE_STR("0D"),
				_MULTITYPE_STR("0E"),
				_MULTITYPE_STR("0F"),
				_MULTITYPE_STR("10"),
				_MULTITYPE_STR("11"),
				_MULTITYPE_STR("12"),
				_MULTITYPE_STR("13"),
				_MULTITYPE_STR("14"),
				_MULTITYPE_STR("15"),
				_MULTITYPE_STR("16"),
				_MULTITYPE_STR("17"),
				_MULTITYPE_STR("18"),
				_MULTITYPE_STR("19"),
				_MULTITYPE_STR("1A"),
				_MULTITYPE_STR("1B"),
				_MULTITYPE_STR("1C"),
				_MULTITYPE_STR("1D"),
				_MULTITYPE_STR("1E"),
				_MULTITYPE_STR("1F"),
				_MULTITYPE_STR("20"),
				_MULTITYPE_STR("21"),
				_MULTITYPE_STR("22"),
				_MULTITYPE_STR("23"),
				_MULTITYPE_STR("24"),
				_MULTITYPE_STR("25"),
				_MULTITYPE_STR("26"),
				_MULTITYPE_STR("27"),
				_MULTITYPE_STR("28"),
				_MULTITYPE_STR("29"),
				_MULTITYPE_STR("2A"),
				_MULTITYPE_STR("2B"),
				_MULTITYPE_STR("2C"),
				_MULTITYPE_STR("2D"),
				_MULTITYPE_STR("2E"),
				_MULTITYPE_STR("2F"),
				_MULTITYPE_STR("30"),
				_MULTITYPE_STR("31"),
				_MULTITYPE_STR("32"),
				_MULTITYPE_STR("33"),
				_MULTITYPE_STR("34"),
				_MULTITYPE_STR("35"),
				_MULTITYPE_STR("36"),
				_MULTITYPE_STR("37"),
				_MULTITYPE_STR("38"),
				_MULTITYPE_STR("39"),
				_MULTITYPE_STR("3A"),
				_MULTITYPE_STR("3B"),
				_MULTITYPE_STR("3C"),
				_MULTITYPE_STR("3D"),
				_MULTITYPE_STR("3E"),
				_MULTITYPE_STR("3F"),
				_MULTITYPE_STR("40"),
				_MULTITYPE_STR("41"),
				_MULTITYPE_STR("42"),
				_MULTITYPE_STR("43"),
				_MULTITYPE_STR("44"),
				_MULTITYPE_STR("45"),
				_MULTITYPE_STR("46"),
				_MULTITYPE_STR("47"),
				_MULTITYPE_STR("48"),
				_MULTITYPE_STR("49"),
				_MULTITYPE_STR("4A"),
				_MULTITYPE_STR("4B"),
				_MULTITYPE_STR("4C"),
				_MULTITYPE_STR("4D"),
				_MULTITYPE_STR("4E"),
				_MULTITYPE_STR("4F"),
				_MULTITYPE_STR("50"),
				_MULTITYPE_STR("51"),
				_MULTITYPE_STR("52"),
				_MULTITYPE_STR("53"),
				_MULTITYPE_STR("54"),
				_MULTITYPE_STR("55"),
				_MULTITYPE_STR("56"),
				_MULTITYPE_STR("57"),
				_MULTITYPE_STR("58"),
				_MULTITYPE_STR("59"),
				_MULTITYPE_STR("5A"),
				_MULTITYPE_STR("5B"),
				_MULTITYPE_STR("5C"),
				_MULTITYPE_STR("5D"),
				_MULTITYPE_STR("5E"),
				_MULTITYPE_STR("5F"),
				_MULTITYPE_STR("60"),
				_MULTITYPE_STR("61"),
				_MULTITYPE_STR("62"),
				_MULTITYPE_STR("63"),
				_MULTITYPE_STR("64"),
				_MULTITYPE_STR("65"),
				_MULTITYPE_STR("66"),
				_MULTITYPE_STR("67"),
				_MULTITYPE_STR("68"),
				_MULTITYPE_STR("69"),
				_MULTITYPE_STR("6A"),
				_MULTITYPE_STR("6B"),
				_MULTITYPE_STR("6C"),
				_MULTITYPE_STR("6D"),
				_MULTITYPE_STR("6E"),
				_MULTITYPE_STR("6F"),
				_MULTITYPE_STR("70"),
				_MULTITYPE_STR("71"),
				_MULTITYPE_STR("72"),
				_MULTITYPE_STR("73"),
				_MULTITYPE_STR("74"),
				_MULTITYPE_STR("75"),
				_MULTITYPE_STR("76"),
				_MULTITYPE_STR("77"),
				_MULTITYPE_STR("78"),
				_MULTITYPE_STR("79"),
				_MULTITYPE_STR("7A"),
				_MULTITYPE_STR("7B"),
				_MULTITYPE_STR("7C"),
				_MULTITYPE_STR("7D"),
				_MULTITYPE_STR("7E"),
				_MULTITYPE_STR("7F"),
				_MULTITYPE_STR("80"),
				_MULTITYPE_STR("81"),
				_MULTITYPE_STR("82"),
				_MULTITYPE_STR("83"),
				_MULTITYPE_STR("84"),
				_MULTITYPE_STR("85"),
				_MULTITYPE_STR("86"),
				_MULTITYPE_STR("87"),
				_MULTITYPE_STR("88"),
				_MULTITYPE_STR("89"),
				_MULTITYPE_STR("8A"),
				_MULTITYPE_STR("8B"),
				_MULTITYPE_STR("8C"),
				_MULTITYPE_STR("8D"),
				_MULTITYPE_STR("8E"),
				_MULTITYPE_STR("8F"),
				_MULTITYPE_STR("90"),
				_MULTITYPE_STR("91"),
				_MULTITYPE_STR("92"),
				_MULTITYPE_STR("93"),
				_MULTITYPE_STR("94"),
				_MULTITYPE_STR("95"),
				_MULTITYPE_STR("96"),
				_MULTITYPE_STR("97"),
				_MULTITYPE_STR("98"),
				_MULTITYPE_STR("99"),
				_MULTITYPE_STR("9A"),
				_MULTITYPE_STR("9B"),
				_MULTITYPE_STR("9C"),
				_MULTITYPE_STR("9D"),
				_MULTITYPE_STR("9E"),
				_MULTITYPE_STR("9F"),
				_MULTITYPE_STR("A0"),
				_MULTITYPE_STR("A1"),
				_MULTITYPE_STR("A2"),
				_MULTITYPE_STR("A3"),
				_MULTITYPE_STR("A4"),
				_MULTITYPE_STR("A5"),
				_MULTITYPE_STR("A6"),
				_MULTITYPE_STR("A7"),
				_MULTITYPE_STR("A8"),
				_MULTITYPE_STR("A9"),
				_MULTITYPE_STR("AA"),
				_MULTITYPE_STR("AB"),
				_MULTITYPE_STR("AC"),
				_MULTITYPE_STR("AD"),
				_MULTITYPE_STR("AE"),
				_MULTITYPE_STR("AF"),
				_MULTITYPE_STR("B0"),
				_MULTITYPE_STR("B1"),
				_MULTITYPE_STR("B2"),
				_MULTITYPE_STR("B3"),
				_MULTITYPE_STR("B4"),
				_MULTITYPE_STR("B5"),
				_MULTITYPE_STR("B6"),
				_MULTITYPE_STR("B7"),
				_MULTITYPE_STR("B8"),
				_MULTITYPE_STR("B9"),
				_MULTITYPE_STR("BA"),
				_MULTITYPE_STR("BB"),
				_MULTITYPE_STR("BC"),
				_MULTITYPE_STR("BD"),
				_MULTITYPE_STR("BE"),
				_MULTITYPE_STR("BF"),
				_MULTITYPE_STR("C0"),
				_MULTITYPE_STR("C1"),
				_MULTITYPE_STR("C2"),
				_MULTITYPE_STR("C3"),
				_MULTITYPE_STR("C4"),
				_MULTITYPE_STR("C5"),
				_MULTITYPE_STR("C6"),
				_MULTITYPE_STR("C7"),
				_MULTITYPE_STR("C8"),
				_MULTITYPE_STR("C9"),
				_MULTITYPE_STR("CA"),
				_MULTITYPE_STR("CB"),
				_MULTITYPE_STR("CC"),
				_MULTITYPE_STR("CD"),
				_MULTITYPE_STR("CE"),
				_MULTITYPE_STR("CF"),
				_MULTITYPE_STR("D0"),
				_MULTITYPE_STR("D1"),
				_MULTITYPE_STR("D2"),
				_MULTITYPE_STR("D3"),
				_MULTITYPE_STR("D4"),
				_MULTITYPE_STR("D5"),
				_MULTITYPE_STR("D6"),
				_MULTITYPE_STR("D7"),
				_MULTITYPE_STR("D8"),
				_MULTITYPE_STR("D9"),
				_MULTITYPE_STR("DA"),
				_MULTITYPE_STR("DB"),
				_MULTITYPE_STR("DC"),
				_MULTITYPE_STR("DD"),
				_MULTITYPE_STR("DE"),
				_MULTITYPE_STR("DF"),
				_MULTITYPE_STR("E0"),
				_MULTITYPE_STR("E1"),
				_MULTITYPE_STR("E2"),
				_MULTITYPE_STR("E3"),
				_MULTITYPE_STR("E4"),
				_MULTITYPE_STR("E5"),
				_MULTITYPE_STR("E6"),
				_MULTITYPE_STR("E7"),
				_MULTITYPE_STR("E8"),
				_MULTITYPE_STR("E9"),
				_MULTITYPE_STR("EA"),
				_MULTITYPE_STR("EB"),
				_MULTITYPE_STR("EC"),
				_MULTITYPE_STR("ED"),
				_MULTITYPE_STR("EE"),
				_MULTITYPE_STR("EF"),
				_MULTITYPE_STR("F0"),
				_MULTITYPE_STR("F1"),
				_MULTITYPE_STR("F2"),
				_MULTITYPE_STR("F3"),
				_MULTITYPE_STR("F4"),
				_MULTITYPE_STR("F5"),
				_MULTITYPE_STR("F6"),
				_MULTITYPE_STR("F7"),
				_MULTITYPE_STR("F8"),
				_MULTITYPE_STR("F9"),
				_MULTITYPE_STR("FA"),
				_MULTITYPE_STR("FB"),
				_MULTITYPE_STR("FC"),
				_MULTITYPE_STR("FD"),
				_MULTITYPE_STR("FE"),
				_MULTITYPE_STR("FF")
			);
			MULTITYPE_CSTR(
				binTable,
				_MULTITYPE_STR("00000000"),
				_MULTITYPE_STR("00000001"),
				_MULTITYPE_STR("00000010"),
				_MULTITYPE_STR("00000011"),
				_MULTITYPE_STR("00000100"),
				_MULTITYPE_STR("00000101"),
				_MULTITYPE_STR("00000110"),
				_MULTITYPE_STR("00000111"),
				_MULTITYPE_STR("00001000"),
				_MULTITYPE_STR("00001001"),
				_MULTITYPE_STR("00001010"),
				_MULTITYPE_STR("00001011"),
				_MULTITYPE_STR("00001100"),
				_MULTITYPE_STR("00001101"),
				_MULTITYPE_STR("00001110"),
				_MULTITYPE_STR("00001111"),
				_MULTITYPE_STR("00010000"),
				_MULTITYPE_STR("00010001"),
				_MULTITYPE_STR("00010010"),
				_MULTITYPE_STR("00010011"),
				_MULTITYPE_STR("00010100"),
				_MULTITYPE_STR("00010101"),
				_MULTITYPE_STR("00010110"),
				_MULTITYPE_STR("00010111"),
				_MULTITYPE_STR("00011000"),
				_MULTITYPE_STR("00011001"),
				_MULTITYPE_STR("00011010"),
				_MULTITYPE_STR("00011011"),
				_MULTITYPE_STR("00011100"),
				_MULTITYPE_STR("00011101"),
				_MULTITYPE_STR("00011110"),
				_MULTITYPE_STR("00011111"),
				_MULTITYPE_STR("00100000"),
				_MULTITYPE_STR("00100001"),
				_MULTITYPE_STR("00100010"),
				_MULTITYPE_STR("00100011"),
				_MULTITYPE_STR("00100100"),
				_MULTITYPE_STR("00100101"),
				_MULTITYPE_STR("00100110"),
				_MULTITYPE_STR("00100111"),
				_MULTITYPE_STR("00101000"),
				_MULTITYPE_STR("00101001"),
				_MULTITYPE_STR("00101010"),
				_MULTITYPE_STR("00101011"),
				_MULTITYPE_STR("00101100"),
				_MULTITYPE_STR("00101101"),
				_MULTITYPE_STR("00101110"),
				_MULTITYPE_STR("00101111"),
				_MULTITYPE_STR("00110000"),
				_MULTITYPE_STR("00110001"),
				_MULTITYPE_STR("00110010"),
				_MULTITYPE_STR("00110011"),
				_MULTITYPE_STR("00110100"),
				_MULTITYPE_STR("00110101"),
				_MULTITYPE_STR("00110110"),
				_MULTITYPE_STR("00110111"),
				_MULTITYPE_STR("00111000"),
				_MULTITYPE_STR("00111001"),
				_MULTITYPE_STR("00111010"),
				_MULTITYPE_STR("00111011"),
				_MULTITYPE_STR("00111100"),
				_MULTITYPE_STR("00111101"),
				_MULTITYPE_STR("00111110"),
				_MULTITYPE_STR("00111111"),
				_MULTITYPE_STR("01000000"),
				_MULTITYPE_STR("01000001"),
				_MULTITYPE_STR("01000010"),
				_MULTITYPE_STR("01000011"),
				_MULTITYPE_STR("01000100"),
				_MULTITYPE_STR("01000101"),
				_MULTITYPE_STR("01000110"),
				_MULTITYPE_STR("01000111"),
				_MULTITYPE_STR("01001000"),
				_MULTITYPE_STR("01001001"),
				_MULTITYPE_STR("01001010"),
				_MULTITYPE_STR("01001011"),
				_MULTITYPE_STR("01001100"),
				_MULTITYPE_STR("01001101"),
				_MULTITYPE_STR("01001110"),
				_MULTITYPE_STR("01001111"),
				_MULTITYPE_STR("01010000"),
				_MULTITYPE_STR("01010001"),
				_MULTITYPE_STR("01010010"),
				_MULTITYPE_STR("01010011"),
				_MULTITYPE_STR("01010100"),
				_MULTITYPE_STR("01010101"),
				_MULTITYPE_STR("01010110"),
				_MULTITYPE_STR("01010111"),
				_MULTITYPE_STR("01011000"),
				_MULTITYPE_STR("01011001"),
				_MULTITYPE_STR("01011010"),
				_MULTITYPE_STR("01011011"),
				_MULTITYPE_STR("01011100"),
				_MULTITYPE_STR("01011101"),
				_MULTITYPE_STR("01011110"),
				_MULTITYPE_STR("01011111"),
				_MULTITYPE_STR("01100000"),
				_MULTITYPE_STR("01100001"),
				_MULTITYPE_STR("01100010"),
				_MULTITYPE_STR("01100011"),
				_MULTITYPE_STR("01100100"),
				_MULTITYPE_STR("01100101"),
				_MULTITYPE_STR("01100110"),
				_MULTITYPE_STR("01100111"),
				_MULTITYPE_STR("01101000"),
				_MULTITYPE_STR("01101001"),
				_MULTITYPE_STR("01101010"),
				_MULTITYPE_STR("01101011"),
				_MULTITYPE_STR("01101100"),
				_MULTITYPE_STR("01101101"),
				_MULTITYPE_STR("01101110"),
				_MULTITYPE_STR("01101111"),
				_MULTITYPE_STR("01110000"),
				_MULTITYPE_STR("01110001"),
				_MULTITYPE_STR("01110010"),
				_MULTITYPE_STR("01110011"),
				_MULTITYPE_STR("01110100"),
				_MULTITYPE_STR("01110101"),
				_MULTITYPE_STR("01110110"),
				_MULTITYPE_STR("01110111"),
				_MULTITYPE_STR("01111000"),
				_MULTITYPE_STR("01111001"),
				_MULTITYPE_STR("01111010"),
				_MULTITYPE_STR("01111011"),
				_MULTITYPE_STR("01111100"),
				_MULTITYPE_STR("01111101"),
				_MULTITYPE_STR("01111110"),
				_MULTITYPE_STR("01111111"),
				_MULTITYPE_STR("10000000"),
				_MULTITYPE_STR("10000001"),
				_MULTITYPE_STR("10000010"),
				_MULTITYPE_STR("10000011"),
				_MULTITYPE_STR("10000100"),
				_MULTITYPE_STR("10000101"),
				_MULTITYPE_STR("10000110"),
				_MULTITYPE_STR("10000111"),
				_MULTITYPE_STR("10001000"),
				_MULTITYPE_STR("10001001"),
				_MULTITYPE_STR("10001010"),
				_MULTITYPE_STR("10001011"),
				_MULTITYPE_STR("10001100"),
				_MULTITYPE_STR("10001101"),
				_MULTITYPE_STR("10001110"),
				_MULTITYPE_STR("10001111"),
				_MULTITYPE_STR("10010000"),
				_MULTITYPE_STR("10010001"),
				_MULTITYPE_STR("10010010"),
				_MULTITYPE_STR("10010011"),
				_MULTITYPE_STR("10010100"),
				_MULTITYPE_STR("10010101"),
				_MULTITYPE_STR("10010110"),
				_MULTITYPE_STR("10010111"),
				_MULTITYPE_STR("10011000"),
				_MULTITYPE_STR("10011001"),
				_MULTITYPE_STR("10011010"),
				_MULTITYPE_STR("10011011"),
				_MULTITYPE_STR("10011100"),
				_MULTITYPE_STR("10011101"),
				_MULTITYPE_STR("10011110"),
				_MULTITYPE_STR("10011111"),
				_MULTITYPE_STR("10100000"),
				_MULTITYPE_STR("10100001"),
				_MULTITYPE_STR("10100010"),
				_MULTITYPE_STR("10100011"),
				_MULTITYPE_STR("10100100"),
				_MULTITYPE_STR("10100101"),
				_MULTITYPE_STR("10100110"),
				_MULTITYPE_STR("10100111"),
				_MULTITYPE_STR("10101000"),
				_MULTITYPE_STR("10101001"),
				_MULTITYPE_STR("10101010"),
				_MULTITYPE_STR("10101011"),
				_MULTITYPE_STR("10101100"),
				_MULTITYPE_STR("10101101"),
				_MULTITYPE_STR("10101110"),
				_MULTITYPE_STR("10101111"),
				_MULTITYPE_STR("10110000"),
				_MULTITYPE_STR("10110001"),
				_MULTITYPE_STR("10110010"),
				_MULTITYPE_STR("10110011"),
				_MULTITYPE_STR("10110100"),
				_MULTITYPE_STR("10110101"),
				_MULTITYPE_STR("10110110"),
				_MULTITYPE_STR("10110111"),
				_MULTITYPE_STR("10111000"),
				_MULTITYPE_STR("10111001"),
				_MULTITYPE_STR("10111010"),
				_MULTITYPE_STR("10111011"),
				_MULTITYPE_STR("10111100"),
				_MULTITYPE_STR("10111101"),
				_MULTITYPE_STR("10111110"),
				_MULTITYPE_STR("10111111"),
				_MULTITYPE_STR("11000000"),
				_MULTITYPE_STR("11000001"),
				_MULTITYPE_STR("11000010"),
				_MULTITYPE_STR("11000011"),
				_MULTITYPE_STR("11000100"),
				_MULTITYPE_STR("11000101"),
				_MULTITYPE_STR("11000110"),
				_MULTITYPE_STR("11000111"),
				_MULTITYPE_STR("11001000"),
				_MULTITYPE_STR("11001001"),
				_MULTITYPE_STR("11001010"),
				_MULTITYPE_STR("11001011"),
				_MULTITYPE_STR("11001100"),
				_MULTITYPE_STR("11001101"),
				_MULTITYPE_STR("11001110"),
				_MULTITYPE_STR("11001111"),
				_MULTITYPE_STR("11010000"),
				_MULTITYPE_STR("11010001"),
				_MULTITYPE_STR("11010010"),
				_MULTITYPE_STR("11010011"),
				_MULTITYPE_STR("11010100"),
				_MULTITYPE_STR("11010101"),
				_MULTITYPE_STR("11010110"),
				_MULTITYPE_STR("11010111"),
				_MULTITYPE_STR("11011000"),
				_MULTITYPE_STR("11011001"),
				_MULTITYPE_STR("11011010"),
				_MULTITYPE_STR("11011011"),
				_MULTITYPE_STR("11011100"),
				_MULTITYPE_STR("11011101"),
				_MULTITYPE_STR("11011110"),
				_MULTITYPE_STR("11011111"),
				_MULTITYPE_STR("11100000"),
				_MULTITYPE_STR("11100001"),
				_MULTITYPE_STR("11100010"),
				_MULTITYPE_STR("11100011"),
				_MULTITYPE_STR("11100100"),
				_MULTITYPE_STR("11100101"),
				_MULTITYPE_STR("11100110"),
				_MULTITYPE_STR("11100111"),
				_MULTITYPE_STR("11101000"),
				_MULTITYPE_STR("11101001"),
				_MULTITYPE_STR("11101010"),
				_MULTITYPE_STR("11101011"),
				_MULTITYPE_STR("11101100"),
				_MULTITYPE_STR("11101101"),
				_MULTITYPE_STR("11101110"),
				_MULTITYPE_STR("11101111"),
				_MULTITYPE_STR("11110000"),
				_MULTITYPE_STR("11110001"),
				_MULTITYPE_STR("11110010"),
				_MULTITYPE_STR("11110011"),
				_MULTITYPE_STR("11110100"),
				_MULTITYPE_STR("11110101"),
				_MULTITYPE_STR("11110110"),
				_MULTITYPE_STR("11110111"),
				_MULTITYPE_STR("11111000"),
				_MULTITYPE_STR("11111001"),
				_MULTITYPE_STR("11111010"),
				_MULTITYPE_STR("11111011"),
				_MULTITYPE_STR("11111100"),
				_MULTITYPE_STR("11111101"),
				_MULTITYPE_STR("11111110"),
				_MULTITYPE_STR("11111111")
			);

			template<class CharT, class IntegerT> int Integer2CharT_10_p(CharT* buf, IntegerT src) {
				static constexpr CharT Zero = mtc::Zero<CharT>();
				IntegerT next;
				int count = 0;
				do {
					next = src / 10;
					buf[count++] = Zero + (CharT)(src - next * 10);
					src = next;
				} while (next != 0);
				return count;
			}

			template<class CharT, class IntegerT> int Integer2CharT_10_m(CharT* buf, IntegerT src) {
				static constexpr CharT Zero = mtc::Zero<CharT>();
				IntegerT next;
				int count = 0;
				do {
					next = src / 10;
					buf[count++] = Zero + (CharT)(next * 10 - src);
					src = next;
				} while (next != 0);
				return count;
			}

			template<class CharT, class IntegerT> void Integer2CharT_10_signed(std::basic_string<CharT>& str, IntegerT src) {
				int count;
				CharT* buf = new CharT[sizeof(IntegerT) * 4];
				str.reserve(sizeof(IntegerT) * 4);
				if (src >= 0) {
					count = _private::Integer2CharT_10_p(buf, src);
				}
				else {
					str.push_back(mtc::Minus<CharT>());
					count = _private::Integer2CharT_10_m(buf, src);
				}
				count--;
				do {
					str.push_back(buf[count--]);
				} while (count >= 0);
				delete[] buf;
			}

			template<class CharT, class IntegerT> void Integer2CharT_10_unsigned(std::basic_string<CharT>& str, IntegerT src) {
				int count;
				CharT* buf = new CharT[sizeof(IntegerT) * 4];
				str.reserve(sizeof(IntegerT) * 4);
				count = _private::Integer2CharT_10_p(buf, src);
				count--;
				do {
					str.push_back(buf[count--]);
				} while (count >= 0);
				delete[] buf;
			}

			template<class CharT, class IntegerT> void Integer2CharT_16(std::basic_string<CharT>& str, IntegerT src) {
				union {
					unsigned char c[sizeof(IntegerT)];
					IntegerT v;
				};
				v = src;
				str.reserve(sizeof(IntegerT) * 2);
				int i;
				for (i = sizeof(IntegerT) - 1; i >= 0; i--) {
					str += hexTable<CharT>(c[i]);
				}
			}

			template<class CharT, class IntegerT> void Integer2CharT_2(std::basic_string<CharT>& str, IntegerT src) {
				union {
					unsigned char c[sizeof(IntegerT)];
					IntegerT v;
				};
				v = src;
				str.reserve(sizeof(IntegerT) * 8);
				int i;
				for (i = sizeof(IntegerT) - 1; i >= 0; i--) {
					str += binTable<CharT>(c[i]);
				}
			}
		}
	}
}

#endif