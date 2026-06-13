// fichero 16853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16853;

Registro16853 crear_registro16853(int id) {
    Registro16853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16853(Registro16853 r) {
    return r.valor + r.id;
}
