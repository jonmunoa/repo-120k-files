// fichero 6233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6233;

Registro6233 crear_registro6233(int id) {
    Registro6233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6233(Registro6233 r) {
    return r.valor + r.id;
}
