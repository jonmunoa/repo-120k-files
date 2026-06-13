// fichero 29725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29725;

Registro29725 crear_registro29725(int id) {
    Registro29725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29725(Registro29725 r) {
    return r.valor + r.id;
}
