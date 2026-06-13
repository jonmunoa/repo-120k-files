// fichero 34581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34581;

Registro34581 crear_registro34581(int id) {
    Registro34581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34581(Registro34581 r) {
    return r.valor + r.id;
}
