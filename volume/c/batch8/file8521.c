// fichero 8521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8521;

Registro8521 crear_registro8521(int id) {
    Registro8521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8521(Registro8521 r) {
    return r.valor + r.id;
}
