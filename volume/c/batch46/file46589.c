// fichero 46589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46589;

Registro46589 crear_registro46589(int id) {
    Registro46589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
