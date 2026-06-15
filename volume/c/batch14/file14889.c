// fichero 14889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14889;

Registro14889 crear_registro14889(int id) {
    Registro14889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
