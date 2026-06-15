// fichero 15593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15593;

Registro15593 crear_registro15593(int id) {
    Registro15593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
