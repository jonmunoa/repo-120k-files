// fichero 20341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20341;

Registro20341 crear_registro20341(int id) {
    Registro20341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
