// fichero 16253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16253;

Registro16253 crear_registro16253(int id) {
    Registro16253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
