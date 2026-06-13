// fichero 2317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2317;

Registro2317 crear_registro2317(int id) {
    Registro2317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2317(Registro2317 r) {
    return r.valor + r.id;
}
