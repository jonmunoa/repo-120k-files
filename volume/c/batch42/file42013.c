// fichero 42013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42013;

Registro42013 crear_registro42013(int id) {
    Registro42013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
