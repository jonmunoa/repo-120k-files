// fichero 7437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7437;

Registro7437 crear_registro7437(int id) {
    Registro7437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
