// fichero 6713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6713;

Registro6713 crear_registro6713(int id) {
    Registro6713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6713(Registro6713 r) {
    return r.valor + r.id;
}
