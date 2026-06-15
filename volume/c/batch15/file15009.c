// fichero 15009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15009;

Registro15009 crear_registro15009(int id) {
    Registro15009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
