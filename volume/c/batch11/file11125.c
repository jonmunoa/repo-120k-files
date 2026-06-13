// fichero 11125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11125;

Registro11125 crear_registro11125(int id) {
    Registro11125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11125(Registro11125 r) {
    return r.valor + r.id;
}
