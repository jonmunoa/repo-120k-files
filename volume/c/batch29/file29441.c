// fichero 29441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29441;

Registro29441 crear_registro29441(int id) {
    Registro29441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29441(Registro29441 r) {
    return r.valor + r.id;
}
