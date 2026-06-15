// fichero 42097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42097;

Registro42097 crear_registro42097(int id) {
    Registro42097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
