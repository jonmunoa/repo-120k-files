// fichero 10473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10473;

Registro10473 crear_registro10473(int id) {
    Registro10473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
