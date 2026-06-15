// fichero 43909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43909;

Registro43909 crear_registro43909(int id) {
    Registro43909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
