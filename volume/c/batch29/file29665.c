// fichero 29665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29665;

Registro29665 crear_registro29665(int id) {
    Registro29665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
