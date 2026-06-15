// fichero 24297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24297;

Registro24297 crear_registro24297(int id) {
    Registro24297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
