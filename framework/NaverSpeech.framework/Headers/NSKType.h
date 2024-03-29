/*
 * Copyright 2016 NAVER Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef NSKType_h
#define NSKType_h


/**
 음성인식 최종 결과 화자 gender 정보

 - NSKMale: 남성
 - NSKFemale: 여성
 */
typedef NS_ENUM(NSInteger, NSKGender)
{
    NSKMale = 0,
    NSKFemale = 1
};


/**
 음성인식 가능한 언어

 - NSKRecognizerLanguageCodeNone: none
 - NSKRecognizerLanguageCodeKorean: 한국어
 - NSKRecognizerLanguageCodeJapanese: 일본어
 - NSKRecognizerLanguageCodeEnglish: 영어
 - NSKRecognizerLanguageCodeSimplifiedChinese: 중국어(간체)
 */
typedef NS_ENUM(NSInteger, NSKRecognizerLanguageCode)
{
    NSKRecognizerLanguageCodeNone = -1,
    NSKRecognizerLanguageCodeKorean = 0,
    NSKRecognizerLanguageCodeJapanese = 1,
    NSKRecognizerLanguageCodeEnglish = 2,
    NSKRecognizerLanguageCodeSimplifiedChinese = 3
};


/**
 EPD(End Point Detection) type

 - NSKEPDTypeNone: none
 - NSKEPDTypeAuto: Auto, 화자가 일정 시간동안 발화 하지않으면 자동으로 끝으로 인식
 - NSKEPDTypeManual: Manual, `- stop:`을 호출 해야만 끝으로 인식
 - NSKEPDTypeHybrid: Auto, Manual 두가지 모두를 사용할 경우
 */
typedef NS_ENUM(NSInteger, NSKEPDType)
{
    NSKEPDTypeNone = -1,
    NSKEPDTypeAuto = 0,
    NSKEPDTypeManual = 1,
    NSKEPDTypeHybrid = 2
};


#endif /* NSKType_h */
