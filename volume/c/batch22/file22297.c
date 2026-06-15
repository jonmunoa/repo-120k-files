// fichero 22297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22297;

Registro22297 crear_registro22297(int id) {
    Registro22297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
