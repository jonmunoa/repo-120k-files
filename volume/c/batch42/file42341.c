// fichero 42341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42341;

Registro42341 crear_registro42341(int id) {
    Registro42341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
