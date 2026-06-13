// fichero 34717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34717;

Registro34717 crear_registro34717(int id) {
    Registro34717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34717(Registro34717 r) {
    return r.valor + r.id;
}
