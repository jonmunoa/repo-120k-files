// fichero 19541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19541;

Registro19541 crear_registro19541(int id) {
    Registro19541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19541(Registro19541 r) {
    return r.valor + r.id;
}
