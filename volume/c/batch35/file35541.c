// fichero 35541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35541;

Registro35541 crear_registro35541(int id) {
    Registro35541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35541(Registro35541 r) {
    return r.valor + r.id;
}
