// fichero 28469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28469;

Registro28469 crear_registro28469(int id) {
    Registro28469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28469(Registro28469 r) {
    return r.valor + r.id;
}
