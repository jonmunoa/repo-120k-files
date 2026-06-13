// fichero 8677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8677;

Registro8677 crear_registro8677(int id) {
    Registro8677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8677(Registro8677 r) {
    return r.valor + r.id;
}
