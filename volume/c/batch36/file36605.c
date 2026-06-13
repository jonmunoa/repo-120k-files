// fichero 36605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36605;

Registro36605 crear_registro36605(int id) {
    Registro36605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36605(Registro36605 r) {
    return r.valor + r.id;
}
