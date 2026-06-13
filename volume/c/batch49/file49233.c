// fichero 49233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49233;

Registro49233 crear_registro49233(int id) {
    Registro49233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49233(Registro49233 r) {
    return r.valor + r.id;
}
