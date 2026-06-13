// fichero 8317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8317;

Registro8317 crear_registro8317(int id) {
    Registro8317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8317(Registro8317 r) {
    return r.valor + r.id;
}
