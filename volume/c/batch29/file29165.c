// fichero 29165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29165;

Registro29165 crear_registro29165(int id) {
    Registro29165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29165(Registro29165 r) {
    return r.valor + r.id;
}
