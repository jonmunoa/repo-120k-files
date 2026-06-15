// fichero 5525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5525;

Registro5525 crear_registro5525(int id) {
    Registro5525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
