// fichero 33349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33349;

Registro33349 crear_registro33349(int id) {
    Registro33349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
