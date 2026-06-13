// fichero 29493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29493;

Registro29493 crear_registro29493(int id) {
    Registro29493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29493(Registro29493 r) {
    return r.valor + r.id;
}
