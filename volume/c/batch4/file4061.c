// fichero 4061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4061;

Registro4061 crear_registro4061(int id) {
    Registro4061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
