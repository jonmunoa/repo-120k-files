// fichero 14313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14313;

Registro14313 crear_registro14313(int id) {
    Registro14313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
