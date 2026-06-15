// fichero 32525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32525;

Registro32525 crear_registro32525(int id) {
    Registro32525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
