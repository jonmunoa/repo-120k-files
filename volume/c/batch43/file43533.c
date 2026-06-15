// fichero 43533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43533;

Registro43533 crear_registro43533(int id) {
    Registro43533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
