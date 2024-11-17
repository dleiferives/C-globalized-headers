#ifndef LATINA_H
#define LATINA_H

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

// Standard keywords (available in all C versions)
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

#endif // LATINA_H
