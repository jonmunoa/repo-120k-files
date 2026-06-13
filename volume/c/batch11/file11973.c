// fichero 11973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11973;

Registro11973 crear_registro11973(int id) {
    Registro11973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11973(Registro11973 r) {
    return r.valor + r.id;
}
