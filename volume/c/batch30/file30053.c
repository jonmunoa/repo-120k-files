// fichero 30053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30053;

Registro30053 crear_registro30053(int id) {
    Registro30053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30053(Registro30053 r) {
    return r.valor + r.id;
}
