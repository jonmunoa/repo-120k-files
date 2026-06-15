// fichero 43177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43177;

Registro43177 crear_registro43177(int id) {
    Registro43177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
