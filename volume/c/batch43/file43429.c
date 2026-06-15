// fichero 43429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43429;

Registro43429 crear_registro43429(int id) {
    Registro43429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
