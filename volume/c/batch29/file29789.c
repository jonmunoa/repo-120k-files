// fichero 29789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29789;

Registro29789 crear_registro29789(int id) {
    Registro29789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29789(Registro29789 r) {
    return r.valor + r.id;
}
