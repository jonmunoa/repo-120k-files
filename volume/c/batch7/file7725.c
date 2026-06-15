// fichero 7725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7725;

Registro7725 crear_registro7725(int id) {
    Registro7725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
