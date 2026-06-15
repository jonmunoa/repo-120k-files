// fichero 2593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2593;

Registro2593 crear_registro2593(int id) {
    Registro2593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
