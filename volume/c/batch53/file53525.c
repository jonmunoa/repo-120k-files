// fichero 53525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53525;

Registro53525 crear_registro53525(int id) {
    Registro53525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53525(Registro53525 r) {
    return r.valor + r.id;
}
