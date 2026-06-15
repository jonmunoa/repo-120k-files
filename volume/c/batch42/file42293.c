// fichero 42293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42293;

Registro42293 crear_registro42293(int id) {
    Registro42293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
