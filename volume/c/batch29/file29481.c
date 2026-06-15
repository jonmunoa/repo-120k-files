// fichero 29481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29481;

Registro29481 crear_registro29481(int id) {
    Registro29481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
