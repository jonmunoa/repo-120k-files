// fichero 38297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38297;

Registro38297 crear_registro38297(int id) {
    Registro38297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
