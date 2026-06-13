// fichero 47405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47405;

Registro47405 crear_registro47405(int id) {
    Registro47405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47405(Registro47405 r) {
    return r.valor + r.id;
}
