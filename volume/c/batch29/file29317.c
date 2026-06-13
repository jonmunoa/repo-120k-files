// fichero 29317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29317;

Registro29317 crear_registro29317(int id) {
    Registro29317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29317(Registro29317 r) {
    return r.valor + r.id;
}
