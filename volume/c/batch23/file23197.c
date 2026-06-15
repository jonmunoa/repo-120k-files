// fichero 23197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23197;

Registro23197 crear_registro23197(int id) {
    Registro23197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
