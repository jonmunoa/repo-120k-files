// fichero 6125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6125;

Registro6125 crear_registro6125(int id) {
    Registro6125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6125(Registro6125 r) {
    return r.valor + r.id;
}
