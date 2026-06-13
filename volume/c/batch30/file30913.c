// fichero 30913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30913;

Registro30913 crear_registro30913(int id) {
    Registro30913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30913(Registro30913 r) {
    return r.valor + r.id;
}
