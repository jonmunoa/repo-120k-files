// fichero 43889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43889;

Registro43889 crear_registro43889(int id) {
    Registro43889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
