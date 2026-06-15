// fichero 13289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13289;

Registro13289 crear_registro13289(int id) {
    Registro13289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
