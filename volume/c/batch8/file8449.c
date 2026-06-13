// fichero 8449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8449;

Registro8449 crear_registro8449(int id) {
    Registro8449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8449(Registro8449 r) {
    return r.valor + r.id;
}
