// fichero 13845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13845;

Registro13845 crear_registro13845(int id) {
    Registro13845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
