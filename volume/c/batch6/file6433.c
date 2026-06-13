// fichero 6433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6433;

Registro6433 crear_registro6433(int id) {
    Registro6433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6433(Registro6433 r) {
    return r.valor + r.id;
}
