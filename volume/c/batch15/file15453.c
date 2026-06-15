// fichero 15453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15453;

Registro15453 crear_registro15453(int id) {
    Registro15453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
