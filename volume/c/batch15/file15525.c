// fichero 15525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15525;

Registro15525 crear_registro15525(int id) {
    Registro15525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
