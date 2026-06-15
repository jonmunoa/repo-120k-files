// fichero 13961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13961;

Registro13961 crear_registro13961(int id) {
    Registro13961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
