// fichero 29341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29341;

Registro29341 crear_registro29341(int id) {
    Registro29341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29341(Registro29341 r) {
    return r.valor + r.id;
}
