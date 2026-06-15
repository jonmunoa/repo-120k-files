// fichero 45377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45377;

Registro45377 crear_registro45377(int id) {
    Registro45377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
