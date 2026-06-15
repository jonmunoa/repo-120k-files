// fichero 13733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13733;

Registro13733 crear_registro13733(int id) {
    Registro13733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
