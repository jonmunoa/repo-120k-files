// fichero 15221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15221;

Registro15221 crear_registro15221(int id) {
    Registro15221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
