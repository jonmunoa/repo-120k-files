// fichero 22289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22289;

Registro22289 crear_registro22289(int id) {
    Registro22289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
