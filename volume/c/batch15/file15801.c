// fichero 15801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15801;

Registro15801 crear_registro15801(int id) {
    Registro15801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
