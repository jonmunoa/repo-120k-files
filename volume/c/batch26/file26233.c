// fichero 26233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26233;

Registro26233 crear_registro26233(int id) {
    Registro26233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
