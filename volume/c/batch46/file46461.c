// fichero 46461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46461;

Registro46461 crear_registro46461(int id) {
    Registro46461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
