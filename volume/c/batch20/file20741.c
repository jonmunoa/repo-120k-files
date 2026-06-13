// fichero 20741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20741;

Registro20741 crear_registro20741(int id) {
    Registro20741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20741(Registro20741 r) {
    return r.valor + r.id;
}
