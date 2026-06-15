// fichero 43829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43829;

Registro43829 crear_registro43829(int id) {
    Registro43829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
