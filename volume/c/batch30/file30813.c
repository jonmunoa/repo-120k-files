// fichero 30813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30813;

Registro30813 crear_registro30813(int id) {
    Registro30813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30813(Registro30813 r) {
    return r.valor + r.id;
}
