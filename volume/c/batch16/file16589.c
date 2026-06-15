// fichero 16589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16589;

Registro16589 crear_registro16589(int id) {
    Registro16589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
