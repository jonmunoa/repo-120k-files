// fichero 30997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30997;

Registro30997 crear_registro30997(int id) {
    Registro30997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30997(Registro30997 r) {
    return r.valor + r.id;
}
