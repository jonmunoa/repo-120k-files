// fichero 43989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43989;

Registro43989 crear_registro43989(int id) {
    Registro43989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
