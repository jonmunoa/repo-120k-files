// fichero 769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro769;

Registro769 crear_registro769(int id) {
    Registro769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro769(Registro769 r) {
    return r.valor + r.id;
}
