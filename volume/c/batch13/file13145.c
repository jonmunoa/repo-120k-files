// fichero 13145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13145;

Registro13145 crear_registro13145(int id) {
    Registro13145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
