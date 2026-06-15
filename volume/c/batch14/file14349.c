// fichero 14349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14349;

Registro14349 crear_registro14349(int id) {
    Registro14349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
