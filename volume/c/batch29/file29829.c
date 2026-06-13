// fichero 29829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29829;

Registro29829 crear_registro29829(int id) {
    Registro29829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29829(Registro29829 r) {
    return r.valor + r.id;
}
