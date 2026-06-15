// fichero 46341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46341;

Registro46341 crear_registro46341(int id) {
    Registro46341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
