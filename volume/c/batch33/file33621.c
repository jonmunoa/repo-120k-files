// fichero 33621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33621;

Registro33621 crear_registro33621(int id) {
    Registro33621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33621(Registro33621 r) {
    return r.valor + r.id;
}
