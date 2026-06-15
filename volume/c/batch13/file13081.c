// fichero 13081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13081;

Registro13081 crear_registro13081(int id) {
    Registro13081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
