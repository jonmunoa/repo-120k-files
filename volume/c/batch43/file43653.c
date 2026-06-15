// fichero 43653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43653;

Registro43653 crear_registro43653(int id) {
    Registro43653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
