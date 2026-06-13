// fichero 11405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11405;

Registro11405 crear_registro11405(int id) {
    Registro11405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11405(Registro11405 r) {
    return r.valor + r.id;
}
