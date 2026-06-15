// fichero 16665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16665;

Registro16665 crear_registro16665(int id) {
    Registro16665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
