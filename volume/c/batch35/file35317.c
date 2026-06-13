// fichero 35317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35317;

Registro35317 crear_registro35317(int id) {
    Registro35317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35317(Registro35317 r) {
    return r.valor + r.id;
}
