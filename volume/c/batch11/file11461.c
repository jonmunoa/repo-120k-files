// fichero 11461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11461;

Registro11461 crear_registro11461(int id) {
    Registro11461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11461(Registro11461 r) {
    return r.valor + r.id;
}
