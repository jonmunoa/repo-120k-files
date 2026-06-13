// fichero 29541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29541;

Registro29541 crear_registro29541(int id) {
    Registro29541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29541(Registro29541 r) {
    return r.valor + r.id;
}
