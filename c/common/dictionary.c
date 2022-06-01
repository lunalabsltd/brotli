/* Copyright 2013 Google Inc. All Rights Reserved.

   Distributed under MIT license.
   See file LICENSE for detail or copy at https://opensource.org/licenses/MIT
*/

#include "dictionary.h"
#include "platform.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#if !defined(BROTLI_EXTERNAL_DICTIONARY_DATA)
static const uint8_t kBrotliDictionaryData[] =
/* GENERATED CODE START */
{
    0
}
/* GENERATED CODE END */
;
#endif  /* !BROTLI_EXTERNAL_DICTIONARY_DATA */

#if !defined(BROTLI_EXTERNAL_DICTIONARY_DATA)
static const BrotliDictionary kBrotliDictionary = {
#else
static BrotliDictionary kBrotliDictionary = {
#endif
  /* size_bits_by_length */
  {
    0
  },

  /* offsets_by_length */
  {
    0
  },

  /* data_size ==  sizeof(kBrotliDictionaryData) */
  1,

  /* data */
    kBrotliDictionaryData
};

const BrotliDictionary* BrotliGetDictionary() {
  return &kBrotliDictionary;
}

void BrotliSetDictionaryData(const uint8_t* data) {
#if defined(BROTLI_EXTERNAL_DICTIONARY_DATA)
  if (!!data && !kBrotliDictionary.data) {
    kBrotliDictionary.data = data;
  }
#else
  BROTLI_UNUSED(data);  // Appease -Werror=unused-parameter
#endif
}

#if defined(__cplusplus) || defined(c_plusplus)
}  /* extern "C" */
#endif
