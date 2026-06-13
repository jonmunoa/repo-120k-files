// fichero 30581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30581;

Registro30581 crear_registro30581(int id) {
    Registro30581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30581(Registro30581 r) {
    return r.valor + r.id;
}
