// fichero 37473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37473;

Registro37473 crear_registro37473(int id) {
    Registro37473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
