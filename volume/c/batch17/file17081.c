// fichero 17081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17081;

Registro17081 crear_registro17081(int id) {
    Registro17081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
