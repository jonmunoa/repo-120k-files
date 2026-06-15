// fichero 13197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13197;

Registro13197 crear_registro13197(int id) {
    Registro13197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
