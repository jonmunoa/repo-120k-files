// fichero 38233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38233;

Registro38233 crear_registro38233(int id) {
    Registro38233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38233(Registro38233 r) {
    return r.valor + r.id;
}
