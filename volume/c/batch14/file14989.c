// fichero 14989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14989;

Registro14989 crear_registro14989(int id) {
    Registro14989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
