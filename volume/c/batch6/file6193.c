// fichero 6193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6193;

Registro6193 crear_registro6193(int id) {
    Registro6193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6193(Registro6193 r) {
    return r.valor + r.id;
}
