// fichero 29761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29761;

Registro29761 crear_registro29761(int id) {
    Registro29761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29761(Registro29761 r) {
    return r.valor + r.id;
}
