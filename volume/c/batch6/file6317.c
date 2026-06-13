// fichero 6317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6317;

Registro6317 crear_registro6317(int id) {
    Registro6317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6317(Registro6317 r) {
    return r.valor + r.id;
}
