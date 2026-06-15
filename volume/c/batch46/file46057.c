// fichero 46057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46057;

Registro46057 crear_registro46057(int id) {
    Registro46057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
