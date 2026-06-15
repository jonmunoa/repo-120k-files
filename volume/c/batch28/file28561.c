// fichero 28561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28561;

Registro28561 crear_registro28561(int id) {
    Registro28561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
