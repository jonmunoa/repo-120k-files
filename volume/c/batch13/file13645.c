// fichero 13645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13645;

Registro13645 crear_registro13645(int id) {
    Registro13645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
