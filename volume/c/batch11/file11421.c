// fichero 11421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11421;

Registro11421 crear_registro11421(int id) {
    Registro11421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11421(Registro11421 r) {
    return r.valor + r.id;
}
