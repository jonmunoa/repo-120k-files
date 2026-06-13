// fichero 317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro317;

Registro317 crear_registro317(int id) {
    Registro317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro317(Registro317 r) {
    return r.valor + r.id;
}
