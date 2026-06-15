// fichero 43529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43529;

Registro43529 crear_registro43529(int id) {
    Registro43529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
