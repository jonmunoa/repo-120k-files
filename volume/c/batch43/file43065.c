// fichero 43065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43065;

Registro43065 crear_registro43065(int id) {
    Registro43065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
