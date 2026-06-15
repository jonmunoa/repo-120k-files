// fichero 48989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48989;

Registro48989 crear_registro48989(int id) {
    Registro48989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
