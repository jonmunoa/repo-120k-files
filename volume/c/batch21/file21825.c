// fichero 21825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21825;

Registro21825 crear_registro21825(int id) {
    Registro21825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
