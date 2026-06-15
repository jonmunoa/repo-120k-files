// fichero 33541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33541;

Registro33541 crear_registro33541(int id) {
    Registro33541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
