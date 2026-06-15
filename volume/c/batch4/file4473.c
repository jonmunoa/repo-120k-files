// fichero 4473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4473;

Registro4473 crear_registro4473(int id) {
    Registro4473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
