// fichero 43729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43729;

Registro43729 crear_registro43729(int id) {
    Registro43729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
