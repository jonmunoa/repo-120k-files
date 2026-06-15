// fichero 33589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33589;

Registro33589 crear_registro33589(int id) {
    Registro33589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
