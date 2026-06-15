// fichero 29373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29373;

Registro29373 crear_registro29373(int id) {
    Registro29373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
