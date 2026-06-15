// fichero 43749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43749;

Registro43749 crear_registro43749(int id) {
    Registro43749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
