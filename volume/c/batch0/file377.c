// fichero 377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro377;

Registro377 crear_registro377(int id) {
    Registro377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
