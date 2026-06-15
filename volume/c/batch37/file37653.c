// fichero 37653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37653;

Registro37653 crear_registro37653(int id) {
    Registro37653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
