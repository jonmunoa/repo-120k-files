// fichero 24589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24589;

Registro24589 crear_registro24589(int id) {
    Registro24589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
