// fichero 16717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16717;

Registro16717 crear_registro16717(int id) {
    Registro16717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16717(Registro16717 r) {
    return r.valor + r.id;
}
