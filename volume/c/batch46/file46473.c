// fichero 46473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46473;

Registro46473 crear_registro46473(int id) {
    Registro46473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
