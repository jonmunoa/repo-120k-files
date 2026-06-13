// fichero 29145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29145;

Registro29145 crear_registro29145(int id) {
    Registro29145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29145(Registro29145 r) {
    return r.valor + r.id;
}
