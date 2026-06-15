// fichero 46269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46269;

Registro46269 crear_registro46269(int id) {
    Registro46269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
