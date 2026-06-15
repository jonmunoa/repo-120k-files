// fichero 42969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42969;

Registro42969 crear_registro42969(int id) {
    Registro42969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
