// fichero 41633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41633;

Registro41633 crear_registro41633(int id) {
    Registro41633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41633(Registro41633 r) {
    return r.valor + r.id;
}
