// fichero 45197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45197;

Registro45197 crear_registro45197(int id) {
    Registro45197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
