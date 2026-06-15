// fichero 46329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46329;

Registro46329 crear_registro46329(int id) {
    Registro46329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
