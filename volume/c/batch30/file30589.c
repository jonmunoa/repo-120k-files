// fichero 30589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30589;

Registro30589 crear_registro30589(int id) {
    Registro30589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
