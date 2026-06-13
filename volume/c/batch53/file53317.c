// fichero 53317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53317;

Registro53317 crear_registro53317(int id) {
    Registro53317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53317(Registro53317 r) {
    return r.valor + r.id;
}
