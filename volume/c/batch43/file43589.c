// fichero 43589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43589;

Registro43589 crear_registro43589(int id) {
    Registro43589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
