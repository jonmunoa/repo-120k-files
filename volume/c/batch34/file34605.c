// fichero 34605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34605;

Registro34605 crear_registro34605(int id) {
    Registro34605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
