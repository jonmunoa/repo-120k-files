// fichero 7889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7889;

Registro7889 crear_registro7889(int id) {
    Registro7889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
