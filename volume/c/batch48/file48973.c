// fichero 48973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48973;

Registro48973 crear_registro48973(int id) {
    Registro48973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
