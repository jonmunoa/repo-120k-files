// fichero 22385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22385;

Registro22385 crear_registro22385(int id) {
    Registro22385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
