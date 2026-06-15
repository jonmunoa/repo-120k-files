// fichero 15817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15817;

Registro15817 crear_registro15817(int id) {
    Registro15817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
