// fichero 33989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33989;

Registro33989 crear_registro33989(int id) {
    Registro33989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
