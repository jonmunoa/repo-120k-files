// fichero 29661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29661;

Registro29661 crear_registro29661(int id) {
    Registro29661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29661(Registro29661 r) {
    return r.valor + r.id;
}
