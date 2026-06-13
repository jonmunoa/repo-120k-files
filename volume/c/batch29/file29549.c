// fichero 29549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29549;

Registro29549 crear_registro29549(int id) {
    Registro29549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29549(Registro29549 r) {
    return r.valor + r.id;
}
