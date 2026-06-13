// fichero 30021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30021;

Registro30021 crear_registro30021(int id) {
    Registro30021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30021(Registro30021 r) {
    return r.valor + r.id;
}
