// fichero 32213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32213;

Registro32213 crear_registro32213(int id) {
    Registro32213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
