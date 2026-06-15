// fichero 15505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15505;

Registro15505 crear_registro15505(int id) {
    Registro15505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
