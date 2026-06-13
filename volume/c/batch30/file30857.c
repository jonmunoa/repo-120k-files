// fichero 30857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30857;

Registro30857 crear_registro30857(int id) {
    Registro30857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30857(Registro30857 r) {
    return r.valor + r.id;
}
