// fichero 32405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32405;

Registro32405 crear_registro32405(int id) {
    Registro32405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
