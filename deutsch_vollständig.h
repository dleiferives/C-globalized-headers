// deutsch_vollständig.h
#ifndef DEUTSCH_VOLLSTÄNDIG_H
#define DEUTSCH_VOLLSTÄNDIG_H

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

// Standard keywords (available in all C versions)
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
// no need for int, as it remains the same
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

#endif // DEUTSCH_VOLLSTÄNDIG_H
