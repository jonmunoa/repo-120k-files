// fichero 15577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15577;

Registro15577 crear_registro15577(int id) {
    Registro15577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
