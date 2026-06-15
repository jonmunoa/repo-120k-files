// fichero 37297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37297;

Registro37297 crear_registro37297(int id) {
    Registro37297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
