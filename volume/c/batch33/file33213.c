// fichero 33213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33213;

Registro33213 crear_registro33213(int id) {
    Registro33213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
