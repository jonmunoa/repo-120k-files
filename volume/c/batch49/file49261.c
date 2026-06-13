// fichero 49261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49261;

Registro49261 crear_registro49261(int id) {
    Registro49261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49261(Registro49261 r) {
    return r.valor + r.id;
}
