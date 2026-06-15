// fichero 28341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28341;

Registro28341 crear_registro28341(int id) {
    Registro28341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
