// fichero 28409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28409;

Registro28409 crear_registro28409(int id) {
    Registro28409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
