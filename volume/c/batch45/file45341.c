// fichero 45341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45341;

Registro45341 crear_registro45341(int id) {
    Registro45341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
