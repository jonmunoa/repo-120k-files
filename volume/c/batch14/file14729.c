// fichero 14729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14729;

Registro14729 crear_registro14729(int id) {
    Registro14729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
