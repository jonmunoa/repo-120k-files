// fichero 2493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2493;

Registro2493 crear_registro2493(int id) {
    Registro2493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2493(Registro2493 r) {
    return r.valor + r.id;
}
