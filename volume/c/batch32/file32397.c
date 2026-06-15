// fichero 32397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32397;

Registro32397 crear_registro32397(int id) {
    Registro32397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
