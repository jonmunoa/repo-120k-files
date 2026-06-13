// fichero 20769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20769;

Registro20769 crear_registro20769(int id) {
    Registro20769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20769(Registro20769 r) {
    return r.valor + r.id;
}
