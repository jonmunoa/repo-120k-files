// fichero 16261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16261;

Registro16261 crear_registro16261(int id) {
    Registro16261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16261(Registro16261 r) {
    return r.valor + r.id;
}
