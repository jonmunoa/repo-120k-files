// fichero 52285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52285;

Registro52285 crear_registro52285(int id) {
    Registro52285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52285(Registro52285 r) {
    return r.valor + r.id;
}
