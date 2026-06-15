// fichero 2473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2473;

Registro2473 crear_registro2473(int id) {
    Registro2473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
