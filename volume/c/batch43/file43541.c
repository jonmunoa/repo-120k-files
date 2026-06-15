// fichero 43541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43541;

Registro43541 crear_registro43541(int id) {
    Registro43541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
