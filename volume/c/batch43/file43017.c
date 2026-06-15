// fichero 43017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43017;

Registro43017 crear_registro43017(int id) {
    Registro43017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
