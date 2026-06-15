// fichero 16989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16989;

Registro16989 crear_registro16989(int id) {
    Registro16989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
