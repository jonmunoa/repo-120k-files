// fichero 47909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47909;

Registro47909 crear_registro47909(int id) {
    Registro47909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
