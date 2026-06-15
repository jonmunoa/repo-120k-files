// fichero 45409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45409;

Registro45409 crear_registro45409(int id) {
    Registro45409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
