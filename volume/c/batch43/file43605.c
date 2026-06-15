// fichero 43605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43605;

Registro43605 crear_registro43605(int id) {
    Registro43605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
