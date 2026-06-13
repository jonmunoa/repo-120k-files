// fichero 38305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38305;

Registro38305 crear_registro38305(int id) {
    Registro38305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38305(Registro38305 r) {
    return r.valor + r.id;
}
