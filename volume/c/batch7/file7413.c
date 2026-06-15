// fichero 7413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7413;

Registro7413 crear_registro7413(int id) {
    Registro7413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
