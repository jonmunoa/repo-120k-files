// fichero 48625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48625;

Registro48625 crear_registro48625(int id) {
    Registro48625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
