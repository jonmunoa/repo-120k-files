// fichero 43125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43125;

Registro43125 crear_registro43125(int id) {
    Registro43125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
