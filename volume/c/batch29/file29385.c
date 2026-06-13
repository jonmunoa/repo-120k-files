// fichero 29385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29385;

Registro29385 crear_registro29385(int id) {
    Registro29385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29385(Registro29385 r) {
    return r.valor + r.id;
}
