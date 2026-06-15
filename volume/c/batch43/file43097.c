// fichero 43097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43097;

Registro43097 crear_registro43097(int id) {
    Registro43097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
