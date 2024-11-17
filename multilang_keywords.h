#ifndef MULTILANGUAGE_C_H
#define MULTILANGUAGE_C_H

// Select the language by defining one of these macros before including this file:
// TOKI_PONA, LATINA, ESPAÑOL, or DEUTSCH_VOLLSTÄNDIG
#define MULTI_LANG_TOKI_PONA "toki pona"
#define MULTI_LANG_LATINA "latina"
#define MULTI_LANG_ESPAÑOL "español"
#define MULTI_LANG_DEUTSCH "deutsch"

// =================== TOKI PONA ===================
#if defined(KEYWORD_LANG) && ( KEYWORD_LANG == "toki pona" || KEYWORD_LANG == MULTI_LANG_TOKI_PONA)

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

#endif // TOKI_PONA

// =================== LATIN ===================
#if defined(KEYWORD_LANG) && ( KEYWORD_LANG == "latina" || KEYWORD_LANG == MULTI_LANG_LATINA)

#if __STDC_VERSION__ >= 202311L  // C23 or later
#define ordinatio alignas
#define magnitudoOrdinationis alignof
#define logicum bool
#define constantExpressionis constexpr
#define falsum false
#define indicatorNullus nullptr
#define assertioStatica static_assert
#define filumLocale thread_local
#define verum true
#define genus typeof
#define genusInqualificatum typeof_unqual
#endif

#if __STDC_VERSION__ >= 201112L  // C11 or later
#define _Ordinatio _Alignas
#define _MagnitudoOrdinationis _Alignof
#define _Atomicum _Atomic
#define _Genericum _Generic
#define _SineReditu _Noreturn
#define _AssertioStatica _Static_assert
#define _FilumLocale _Thread_local
#endif

#if __STDC_VERSION__ >= 199901L  // C99 or later
#define inlinea inline
#define restrictum restrict
#define _Logicum _Bool
#define _Complexum _Complex
#define _Imaginarium _Imaginary
#endif

#if __STDC_VERSION__ >= 202311L  // C23 specific features
#define _IntegerBitalis _BitInt
#define _Decimalis128 _Decimal128
#define _Decimalis32 _Decimal32
#define _Decimalis64 _Decimal64
#endif

#define automaticus auto
#define interrumpe break
#define casus case
#define character char
#define constans const
#define perge continue
#define defectus default
#define fac do
#define duplum double
#define aliter else
#define enumeratio enum
#define externus extern
#define fluctuans float
#define pro for
#define ito goto
#define si if
#define integer int
#define longus long
#define registrum register
#define redi return
#define brevis short
#define signatus signed
#define magnitudo sizeof
#define staticus static
#define structura struct
#define muta switch
#define unio union
#define nonsignatus unsigned
#define vacuum void
#define volatilis volatile
#define dum while

#endif // LATINA

// =================== SPANISH ===================
#if defined(KEYWORD_LANG) && ( KEYWORD_LANG == "español" || KEYWORD_LANG == MULTI_LANG_ESPAÑOL)
#if __STDC_VERSION__ >= 202311L  // C23 or later
#define alineacion alignas
#define tamaño_alineacion alignof
#define booleano bool
#define constexpr constexpr
#define falso false
#define puntero_nulo nullptr
#define assert_estatico static_assert
#define local_hilo thread_local
#define verdadero true
#define tipo typeof
#define tipo_sin_calificar typeof_unqual
#endif

#if __STDC_VERSION__ >= 201112L  // C11 or later
#define _Alineacion _Alignas
#define _Tamaño_alineacion _Alignof
#define _Atomico _Atomic
#define _Generico _Generic
#define _Sin_retorno _Noreturn
#define _Assert_estatico _Static_assert
#define _Local_hilo _Thread_local
#endif

#if __STDC_VERSION__ >= 199901L  // C99 or later
#define en_linea inline
#define restringir restrict
#define _Booleano _Bool
#define _Complejo _Complex
#define _Imaginario _Imaginary
#endif

#if __STDC_VERSION__ >= 202311L  // C23 specific features
#define _Entero_bit _BitInt
#define _Decimal128 _Decimal128
#define _Decimal32 _Decimal32
#define _Decimal64 _Decimal64
#endif

#define automatico auto
#define romper break
#define caso case
#define caracter char
#define constante const
#define continuar continue
#define defecto default
#define hacer do
#define doble double
#define sino else
#define enumeracion enum
#define externo extern
#define flotante float
#define para for
#define ir goto
#define si if
#define entero int
#define largo long
#define registrar register
#define regresar return
#define corto short
#define firmado signed
#define tamaño sizeof
#define estatico static
#define estructura struct
#define cambiar switch
#define union union
#define sin_signo unsigned
#define vacio void
#define volatil volatile
#define mientras while

#endif // ESPAÑOL

// =================== GERMAN ===================
#if defined(KEYWORD_LANG) && ( KEYWORD_LANG == "deutsch" || KEYWORD_LANG == MULTI_LANG_DEUTSCH)
#if __STDC_VERSION__ >= 202311L  // C23 or later
#define ausrichten alignas
#define ausrichtungsgröße alignof
#define boolesch bool
#define konstexpr constexpr
#define falsch false
#define nullzeiger nullptr
#define statisch_assertieren static_assert
#define thread_lokal thread_local
#define wahr true
#define art typeof
#define art_unqual typeof_unqual
#endif

#if __STDC_VERSION__ >= 201112L  // C11 or later
#define _Ausrichten _Alignas
#define _Ausrichtungsgröße _Alignof
#define _Atomar _Atomic
#define _Generisch _Generic
#define _Nichtzurückkehrend _Noreturn
#define _Statisch_assertieren _Static_assert
#define _Thread_lokal _Thread_local
#endif

#if __STDC_VERSION__ >= 199901L  // C99 or later
#define inline inline
#define einschränken restrict
#define _Boolesch _Bool
#define _Komplex _Complex
#define _Imaginär _Imaginary
#endif

#if __STDC_VERSION__ >= 202311L  // C23 specific features
#define _BitZahl _BitInt
#define _Dezimal128 _Decimal128
#define _Dezimal32 _Decimal32
#define _Dezimal64 _Decimal64
#endif

#define automatisch auto
#define brich break
#define fall case
#define zeichen char
#define konst const
#define fortsetzen continue
#define standard default
#define tun do
#define doppelt double
#define sonst else
#define groß enum
#define extern extern
#define schwimmen float
#define für for
#define zu goto
#define wenn if
#define lang long
#define registrieren register
#define zurück return
#define kurz short
#define signiert signed
#define größe sizeof
#define statisch static
#define strukt struct
#define schalte switch
#define vereinigung union
#define unsigniert unsigned
#define leer void
#define flüchtig volatile
#define während while

#endif // DEUTSCH_VOLLSTÄNDIG

#endif // MULTILANGUAGE_C_H
