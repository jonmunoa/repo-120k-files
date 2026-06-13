// fichero 30801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30801;

Registro30801 crear_registro30801(int id) {
    Registro30801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30801(Registro30801 r) {
    return r.valor + r.id;
}
