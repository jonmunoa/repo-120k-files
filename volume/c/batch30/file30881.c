// fichero 30881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30881;

Registro30881 crear_registro30881(int id) {
    Registro30881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30881(Registro30881 r) {
    return r.valor + r.id;
}
