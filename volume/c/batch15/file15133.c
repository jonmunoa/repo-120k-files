// fichero 15133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15133;

Registro15133 crear_registro15133(int id) {
    Registro15133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
