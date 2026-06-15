// fichero 32093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32093;

Registro32093 crear_registro32093(int id) {
    Registro32093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
