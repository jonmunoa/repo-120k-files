// fichero 13969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13969;

Registro13969 crear_registro13969(int id) {
    Registro13969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
