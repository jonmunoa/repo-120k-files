// fichero 45937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45937;

Registro45937 crear_registro45937(int id) {
    Registro45937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
