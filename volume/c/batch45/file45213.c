// fichero 45213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45213;

Registro45213 crear_registro45213(int id) {
    Registro45213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
