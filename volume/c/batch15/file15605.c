// fichero 15605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15605;

Registro15605 crear_registro15605(int id) {
    Registro15605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
