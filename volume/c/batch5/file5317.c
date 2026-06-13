// fichero 5317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5317;

Registro5317 crear_registro5317(int id) {
    Registro5317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5317(Registro5317 r) {
    return r.valor + r.id;
}
