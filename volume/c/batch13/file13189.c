// fichero 13189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13189;

Registro13189 crear_registro13189(int id) {
    Registro13189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
