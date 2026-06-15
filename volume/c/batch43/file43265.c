// fichero 43265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43265;

Registro43265 crear_registro43265(int id) {
    Registro43265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
