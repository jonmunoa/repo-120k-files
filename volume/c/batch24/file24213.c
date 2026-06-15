// fichero 24213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24213;

Registro24213 crear_registro24213(int id) {
    Registro24213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
