// fichero 32341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32341;

Registro32341 crear_registro32341(int id) {
    Registro32341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
