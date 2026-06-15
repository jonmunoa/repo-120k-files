// fichero 46989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46989;

Registro46989 crear_registro46989(int id) {
    Registro46989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
