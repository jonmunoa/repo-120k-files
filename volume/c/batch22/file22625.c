// fichero 22625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22625;

Registro22625 crear_registro22625(int id) {
    Registro22625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
