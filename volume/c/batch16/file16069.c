// fichero 16069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16069;

Registro16069 crear_registro16069(int id) {
    Registro16069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
