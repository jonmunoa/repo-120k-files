// fichero 15717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15717;

Registro15717 crear_registro15717(int id) {
    Registro15717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
