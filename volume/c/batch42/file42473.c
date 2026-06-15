// fichero 42473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42473;

Registro42473 crear_registro42473(int id) {
    Registro42473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
