// fichero 42225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42225;

Registro42225 crear_registro42225(int id) {
    Registro42225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
