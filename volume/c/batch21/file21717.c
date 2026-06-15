// fichero 21717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21717;

Registro21717 crear_registro21717(int id) {
    Registro21717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
