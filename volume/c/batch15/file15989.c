// fichero 15989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15989;

Registro15989 crear_registro15989(int id) {
    Registro15989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
