// fichero 48345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48345;

Registro48345 crear_registro48345(int id) {
    Registro48345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
