
# Globalized C header file

This allow your to write C programs using keywords in different languages by using the preprocessor.  This is a somewhat silly project. 

## Features

- Write C programs using keywords in **Toki Pona**, **Latin**, **Spanish**, or **German**.
- Supports modern C standards (C99, C11, and C23).
- Simple setup: include the header and set the desired language.
- Ensures compatibility by checking the compiler's C standard version.
- Extensive support for both standard and advanced C keywords.

---

## Table of Contents

1. [Installation](#installation)
2. [Supported Languages and Keywords](#supported-languages-and-keywords)
3. [Usage](#usage)
   - [Setting the Language](#setting-the-language)
   - [Writing a Program](#writing-a-program)
4. [Examples](#examples)
   - [Toki Pona Example](#toki-pona-example)
   - [Latin Example](#latin-example)
   - [Spanish Example](#spanish-example)
   - [German Example](#german-example)
5. [Contributing](#contributing)
6. [License](#license)

---

## Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/dleiferives/C-globalized-headers.git
   cd C-globalized-headers
   ```

2. Copy the header file `multilang_keywords.h` into your project directory.

3. Include the header in your program:
   ```c
   #include "multilang_keywords.h"
   ```

---

## Supported Languages and some Keywords

### Toki Pona (`"toki pona"`) 
A minimalist constructed language with a simple vocabulary.

| English Keyword    | Toki Pona Keyword |  
|---------------------|-------------------|  
| `if`               | `la`             |  
| `return`           | `kama`           |  
| `while`            | `awen_la`        |  
| `void`             | `ala`            |  
| `int`              | `nanpa`          |

### Latin (`"latina"`)
A classical language, perfect for academic and intellectual purposes.

| English Keyword    | Latin Keyword     |  
|---------------------|-------------------|  
| `if`               | `si`             |  
| `return`           | `redi`           |  
| `while`            | `dum`            |  
| `void`             | `vacuum`         |  
| `int`              | `integer`        |

### Spanish (`"español"`)
A widely spoken and culturally significant language.

| English Keyword    | Spanish Keyword   |  
|---------------------|-------------------|  
| `if`               | `si`             |  
| `return`           | `regresar`       |  
| `while`            | `mientras`       |  
| `void`             | `vacio`          |  
| `int`              | `entero`         |

### German (`"deutsch"`)
A language known for precision and technical rigor.

| English Keyword    | German Keyword    |  
|---------------------|-------------------|  
| `if`               | `wenn`           |  
| `return`           | `zurück`         |  
| `while`            | `während`        |  
| `void`             | `leer`           |  
| `int`              | `int`            |

---

## Usage

### Setting the Language

To choose a language, define the `KEYWORD_LANG` macro with one of the supported language names before including the header file. You can use either the language name as a string or the predefined macro:

| Language    | Macro              | String          |  
|-------------|--------------------|-----------------|  
| Toki Pona   | `MULTI_LANG_TOKI_PONA` | `"toki pona"`  |  
| Latin       | `MULTI_LANG_LATINA`   | `"latina"`     |  
| Spanish     | `MULTI_LANG_ESPAÑOL`  | `"español"`    |  
| German      | `MULTI_LANG_DEUTSCH`  | `"deutsch"`    |

Example:
```c
#define KEYWORD_LANG "toki pona"
#include "multilang_keywords.h"
```

### Writing a Program

Write your program using the keywords in the selected language. Standard library functions remain the same, and only the keywords are replaced.

---

## Examples

### Toki Pona Example
```c
#define KEYWORD_LANG "toki pona"
#include "multilang_keywords.h"
#include <stdio.h>

nanpa main() {
    la (1) {
        printf("toki pona!");
    }
    kama 0;
}
```

### Latin Example
```c
#define KEYWORD_LANG "latina"
#include "multilang_keywords.h"
#include <stdio.h>

integer main() {
    si (1) {
        printf("Salve, Mundi!");
    }
    redi 0;
}
```

### Spanish Example
```c
#define KEYWORD_LANG "español"
#include "multilanguage_c.h"
#include <stdio.h>

entero main() {
    si (1) {
        printf("¡Hola, Mundo!");
    }
    regresar 0;
}
```

### German Example
```c
#define KEYWORD_LANG "deutsch"
#include "multilang_keywords.h"
#include <stdio.h>

int main() {
    wenn (1) {
        printf("Hallo, Welt!");
    }
    zurück 0;
}
```

---

## Contributing

We welcome contributions to extend the project:
- Add support for more languages.
- Fix bugs or improve compatibility.
- Enhance (add) documentation.

---
