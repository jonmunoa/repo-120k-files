// fichero 49097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49097;

Registro49097 crear_registro49097(int id) {
    Registro49097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49097(Registro49097 r) {
    return r.valor + r.id;
}
