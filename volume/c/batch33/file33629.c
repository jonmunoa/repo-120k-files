// fichero 33629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33629;

Registro33629 crear_registro33629(int id) {
    Registro33629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
