// fichero 35069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35069;

Registro35069 crear_registro35069(int id) {
    Registro35069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35069(Registro35069 r) {
    return r.valor + r.id;
}
