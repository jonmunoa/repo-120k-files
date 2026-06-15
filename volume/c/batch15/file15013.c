// fichero 15013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15013;

Registro15013 crear_registro15013(int id) {
    Registro15013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
