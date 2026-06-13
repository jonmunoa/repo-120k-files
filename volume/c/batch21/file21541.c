// fichero 21541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21541;

Registro21541 crear_registro21541(int id) {
    Registro21541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21541(Registro21541 r) {
    return r.valor + r.id;
}
