// fichero 46909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46909;

Registro46909 crear_registro46909(int id) {
    Registro46909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
