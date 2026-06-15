// fichero 46373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46373;

Registro46373 crear_registro46373(int id) {
    Registro46373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
