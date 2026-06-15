// fichero 43241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43241;

Registro43241 crear_registro43241(int id) {
    Registro43241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
