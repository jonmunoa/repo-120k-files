// fichero 6853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6853;

Registro6853 crear_registro6853(int id) {
    Registro6853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6853(Registro6853 r) {
    return r.valor + r.id;
}
