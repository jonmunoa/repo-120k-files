// fichero 29173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29173;

Registro29173 crear_registro29173(int id) {
    Registro29173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29173(Registro29173 r) {
    return r.valor + r.id;
}
