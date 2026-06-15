// fichero 13549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13549;

Registro13549 crear_registro13549(int id) {
    Registro13549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
