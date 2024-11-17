#ifndef TOKI_PONA_H
#define TOKI_PONA_H

#if __STDC_VERSION__ >= 202311L  // C23 or later
#define nasin_pona alignas
#define suli_nasin_pona alignof
#define lon_ala_lon bool
#define ijo_pi_tenpo_kama constexpr
#define ala false
#define ijo_ala nullptr
#define toki_awen static_assert
#define ijo_lili_taso thread_local
#define lon true
#define nasin typeof
#define nasin_weka typeof_unqual
#endif

#if __STDC_VERSION__ >= 201112L  // C11 or later
#define _Nasin_pona _Alignas
#define _Suli_nasin_pona _Alignof
#define _Ijo_lili _Atomic
#define _Kulupu _Generic
#define _Pini_ala _Noreturn
#define _Toki_awen _Static_assert
#define _Ijo_lili_taso _Thread_local
#endif

#if __STDC_VERSION__ >= 199901L  // C99 or later
#define lon_insa inline
#define weka_ala restrict
#define _Lon_ala_lon _Bool
#define _Suli _Complex
#define _Lili _Imaginary
#endif

#if __STDC_VERSION__ >= 202311L  // C23 specific features
#define _Nanpa_lili _BitInt
#define _Nanpa_suli128 _Decimal128
#define _Nanpa_suli32 _Decimal32
#define _Nanpa_suli64 _Decimal64
#endif

// Standard keywords (available in all C versions)
#define ilo auto
#define pini break
#define ijo case
#define sitelen char
#define awen const
#define awen_pali continue
#define ijo_ala_la default
#define pali do
#define nanpa_tu double
#define ante else
#define kulupu enum
#define lon_ante extern
#define telo float
#define tawa for
#define tawa_weka goto
#define la if
#define nanpa int
#define suli long
#define awen_nimi register
#define kama return
#define lili short
#define nanpa_pona signed
#define suli_ijo sizeof
#define awen_ijo static
#define kulupu_ijo struct
#define ante_ijo switch
#define wan union
#define nanpa_ala unsigned
#define ala void
#define kama_ante volatile
#define awen_la while

#endif // TOKI_PONA_H
