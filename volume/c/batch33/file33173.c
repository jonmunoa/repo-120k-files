// fichero 33173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33173;

Registro33173 crear_registro33173(int id) {
    Registro33173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
