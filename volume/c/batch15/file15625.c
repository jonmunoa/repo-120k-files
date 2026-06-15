// fichero 15625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15625;

Registro15625 crear_registro15625(int id) {
    Registro15625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
