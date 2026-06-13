// fichero 29797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29797;

Registro29797 crear_registro29797(int id) {
    Registro29797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29797(Registro29797 r) {
    return r.valor + r.id;
}
