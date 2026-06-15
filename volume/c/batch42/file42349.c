// fichero 42349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42349;

Registro42349 crear_registro42349(int id) {
    Registro42349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
