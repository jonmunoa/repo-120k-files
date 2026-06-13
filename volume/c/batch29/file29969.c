// fichero 29969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29969;

Registro29969 crear_registro29969(int id) {
    Registro29969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29969(Registro29969 r) {
    return r.valor + r.id;
}
