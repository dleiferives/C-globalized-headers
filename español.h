#ifndef ESPAÑOL_H
#define ESPAÑOL_H

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

// Standard keywords (available in all C versions)
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

#endif // ESPAÑOL_H
