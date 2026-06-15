// fichero 13133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13133;

Registro13133 crear_registro13133(int id) {
    Registro13133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
