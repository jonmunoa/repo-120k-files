// fichero 6033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6033;

Registro6033 crear_registro6033(int id) {
    Registro6033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6033(Registro6033 r) {
    return r.valor + r.id;
}
