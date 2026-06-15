// fichero 21213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21213;

Registro21213 crear_registro21213(int id) {
    Registro21213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
