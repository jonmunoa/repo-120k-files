// fichero 43069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43069;

Registro43069 crear_registro43069(int id) {
    Registro43069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
