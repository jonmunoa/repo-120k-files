// fichero 29033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29033;

Registro29033 crear_registro29033(int id) {
    Registro29033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29033(Registro29033 r) {
    return r.valor + r.id;
}
