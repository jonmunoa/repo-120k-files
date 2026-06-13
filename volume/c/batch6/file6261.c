// fichero 6261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6261;

Registro6261 crear_registro6261(int id) {
    Registro6261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6261(Registro6261 r) {
    return r.valor + r.id;
}
