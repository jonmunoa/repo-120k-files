// fichero 7473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7473;

Registro7473 crear_registro7473(int id) {
    Registro7473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
