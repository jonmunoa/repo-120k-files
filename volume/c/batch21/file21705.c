// fichero 21705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21705;

Registro21705 crear_registro21705(int id) {
    Registro21705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
