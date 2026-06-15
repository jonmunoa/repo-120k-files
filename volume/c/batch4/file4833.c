// fichero 4833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4833;

Registro4833 crear_registro4833(int id) {
    Registro4833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
