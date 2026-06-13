// fichero 2717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2717;

Registro2717 crear_registro2717(int id) {
    Registro2717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2717(Registro2717 r) {
    return r.valor + r.id;
}
