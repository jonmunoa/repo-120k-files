// fichero 42509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42509;

Registro42509 crear_registro42509(int id) {
    Registro42509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
