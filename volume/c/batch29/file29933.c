// fichero 29933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29933;

Registro29933 crear_registro29933(int id) {
    Registro29933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29933(Registro29933 r) {
    return r.valor + r.id;
}
