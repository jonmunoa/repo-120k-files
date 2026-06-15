// fichero 22141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22141;

Registro22141 crear_registro22141(int id) {
    Registro22141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
