// fichero 26341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26341;

Registro26341 crear_registro26341(int id) {
    Registro26341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
