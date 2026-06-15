// fichero 45589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45589;

Registro45589 crear_registro45589(int id) {
    Registro45589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
