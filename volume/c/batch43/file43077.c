// fichero 43077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43077;

Registro43077 crear_registro43077(int id) {
    Registro43077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
