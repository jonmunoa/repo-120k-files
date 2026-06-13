// fichero 43717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43717;

Registro43717 crear_registro43717(int id) {
    Registro43717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43717(Registro43717 r) {
    return r.valor + r.id;
}
