// fichero 15561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15561;

Registro15561 crear_registro15561(int id) {
    Registro15561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
