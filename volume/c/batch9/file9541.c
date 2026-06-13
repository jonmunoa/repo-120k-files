// fichero 9541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9541;

Registro9541 crear_registro9541(int id) {
    Registro9541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9541(Registro9541 r) {
    return r.valor + r.id;
}
