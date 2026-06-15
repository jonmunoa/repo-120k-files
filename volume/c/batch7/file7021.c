// fichero 7021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7021;

Registro7021 crear_registro7021(int id) {
    Registro7021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
