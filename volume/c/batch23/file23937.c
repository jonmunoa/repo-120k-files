// fichero 23937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23937;

Registro23937 crear_registro23937(int id) {
    Registro23937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
