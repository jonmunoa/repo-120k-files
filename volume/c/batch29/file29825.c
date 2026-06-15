// fichero 29825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29825;

Registro29825 crear_registro29825(int id) {
    Registro29825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
