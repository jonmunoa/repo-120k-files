// fichero 13153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13153;

Registro13153 crear_registro13153(int id) {
    Registro13153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
