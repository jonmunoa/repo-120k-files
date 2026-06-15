// fichero 4089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4089;

Registro4089 crear_registro4089(int id) {
    Registro4089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
