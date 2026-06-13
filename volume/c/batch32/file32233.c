// fichero 32233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32233;

Registro32233 crear_registro32233(int id) {
    Registro32233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32233(Registro32233 r) {
    return r.valor + r.id;
}
