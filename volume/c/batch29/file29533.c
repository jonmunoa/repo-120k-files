// fichero 29533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29533;

Registro29533 crear_registro29533(int id) {
    Registro29533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29533(Registro29533 r) {
    return r.valor + r.id;
}
