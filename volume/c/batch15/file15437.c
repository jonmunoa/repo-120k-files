// fichero 15437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15437;

Registro15437 crear_registro15437(int id) {
    Registro15437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
