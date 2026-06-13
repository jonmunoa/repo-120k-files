// fichero 30477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30477;

Registro30477 crear_registro30477(int id) {
    Registro30477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30477(Registro30477 r) {
    return r.valor + r.id;
}
