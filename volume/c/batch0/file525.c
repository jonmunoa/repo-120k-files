// fichero 525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro525;

Registro525 crear_registro525(int id) {
    Registro525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
