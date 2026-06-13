// fichero 24717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24717;

Registro24717 crear_registro24717(int id) {
    Registro24717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24717(Registro24717 r) {
    return r.valor + r.id;
}
