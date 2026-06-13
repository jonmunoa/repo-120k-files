// fichero 24769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24769;

Registro24769 crear_registro24769(int id) {
    Registro24769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24769(Registro24769 r) {
    return r.valor + r.id;
}
