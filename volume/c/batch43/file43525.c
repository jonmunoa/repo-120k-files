// fichero 43525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43525;

Registro43525 crear_registro43525(int id) {
    Registro43525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
