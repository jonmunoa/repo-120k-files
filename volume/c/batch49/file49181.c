// fichero 49181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49181;

Registro49181 crear_registro49181(int id) {
    Registro49181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49181(Registro49181 r) {
    return r.valor + r.id;
}
