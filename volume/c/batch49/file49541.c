// fichero 49541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49541;

Registro49541 crear_registro49541(int id) {
    Registro49541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49541(Registro49541 r) {
    return r.valor + r.id;
}
