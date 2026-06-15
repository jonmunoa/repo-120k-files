// fichero 42237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42237;

Registro42237 crear_registro42237(int id) {
    Registro42237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
