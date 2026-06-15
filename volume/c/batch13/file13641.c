// fichero 13641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13641;

Registro13641 crear_registro13641(int id) {
    Registro13641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
