// fichero 30789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30789;

Registro30789 crear_registro30789(int id) {
    Registro30789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30789(Registro30789 r) {
    return r.valor + r.id;
}
