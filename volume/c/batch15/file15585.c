// fichero 15585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15585;

Registro15585 crear_registro15585(int id) {
    Registro15585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
