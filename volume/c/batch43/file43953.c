// fichero 43953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43953;

Registro43953 crear_registro43953(int id) {
    Registro43953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
