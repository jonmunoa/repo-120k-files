// fichero 43057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43057;

Registro43057 crear_registro43057(int id) {
    Registro43057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
