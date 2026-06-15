// fichero 47525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47525;

Registro47525 crear_registro47525(int id) {
    Registro47525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
