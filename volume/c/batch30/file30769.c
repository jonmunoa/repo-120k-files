// fichero 30769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30769;

Registro30769 crear_registro30769(int id) {
    Registro30769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30769(Registro30769 r) {
    return r.valor + r.id;
}
