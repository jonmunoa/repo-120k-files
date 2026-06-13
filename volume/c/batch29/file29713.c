// fichero 29713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29713;

Registro29713 crear_registro29713(int id) {
    Registro29713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29713(Registro29713 r) {
    return r.valor + r.id;
}
