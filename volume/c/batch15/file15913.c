// fichero 15913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15913;

Registro15913 crear_registro15913(int id) {
    Registro15913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
