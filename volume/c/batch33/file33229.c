// fichero 33229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33229;

Registro33229 crear_registro33229(int id) {
    Registro33229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
