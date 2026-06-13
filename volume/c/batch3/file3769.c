// fichero 3769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3769;

Registro3769 crear_registro3769(int id) {
    Registro3769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3769(Registro3769 r) {
    return r.valor + r.id;
}
