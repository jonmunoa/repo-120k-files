// fichero 48909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48909;

Registro48909 crear_registro48909(int id) {
    Registro48909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
