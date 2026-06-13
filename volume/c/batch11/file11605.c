// fichero 11605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11605;

Registro11605 crear_registro11605(int id) {
    Registro11605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11605(Registro11605 r) {
    return r.valor + r.id;
}
