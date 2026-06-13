// fichero 11437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11437;

Registro11437 crear_registro11437(int id) {
    Registro11437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11437(Registro11437 r) {
    return r.valor + r.id;
}
