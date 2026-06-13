// fichero 46305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46305;

Registro46305 crear_registro46305(int id) {
    Registro46305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46305(Registro46305 r) {
    return r.valor + r.id;
}
