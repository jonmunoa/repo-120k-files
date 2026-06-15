// fichero 20245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20245;

Registro20245 crear_registro20245(int id) {
    Registro20245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
