// fichero 32069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32069;

Registro32069 crear_registro32069(int id) {
    Registro32069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32069(Registro32069 r) {
    return r.valor + r.id;
}
