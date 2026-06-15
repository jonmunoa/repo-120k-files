// fichero 13541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13541;

Registro13541 crear_registro13541(int id) {
    Registro13541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
