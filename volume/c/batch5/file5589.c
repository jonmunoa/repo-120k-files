// fichero 5589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5589;

Registro5589 crear_registro5589(int id) {
    Registro5589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
