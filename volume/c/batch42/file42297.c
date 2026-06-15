// fichero 42297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42297;

Registro42297 crear_registro42297(int id) {
    Registro42297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
