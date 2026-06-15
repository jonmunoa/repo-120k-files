// fichero 14269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14269;

Registro14269 crear_registro14269(int id) {
    Registro14269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
