// fichero 20589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20589;

Registro20589 crear_registro20589(int id) {
    Registro20589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
