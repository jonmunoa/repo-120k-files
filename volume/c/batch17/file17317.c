// fichero 17317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17317;

Registro17317 crear_registro17317(int id) {
    Registro17317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17317(Registro17317 r) {
    return r.valor + r.id;
}
