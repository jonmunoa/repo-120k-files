// fichero 46097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46097;

Registro46097 crear_registro46097(int id) {
    Registro46097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
