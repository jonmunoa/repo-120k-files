// fichero 29717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29717;

Registro29717 crear_registro29717(int id) {
    Registro29717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29717(Registro29717 r) {
    return r.valor + r.id;
}
