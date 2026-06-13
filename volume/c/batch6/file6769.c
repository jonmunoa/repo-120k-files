// fichero 6769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6769;

Registro6769 crear_registro6769(int id) {
    Registro6769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6769(Registro6769 r) {
    return r.valor + r.id;
}
