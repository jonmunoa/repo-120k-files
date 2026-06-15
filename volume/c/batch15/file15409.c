// fichero 15409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15409;

Registro15409 crear_registro15409(int id) {
    Registro15409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
