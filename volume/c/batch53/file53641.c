// fichero 53641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53641;

Registro53641 crear_registro53641(int id) {
    Registro53641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53641(Registro53641 r) {
    return r.valor + r.id;
}
