// fichero 341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro341;

Registro341 crear_registro341(int id) {
    Registro341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
