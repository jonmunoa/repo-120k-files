// fichero 30197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30197;

Registro30197 crear_registro30197(int id) {
    Registro30197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30197(Registro30197 r) {
    return r.valor + r.id;
}
