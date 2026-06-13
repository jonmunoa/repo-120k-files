// fichero 16469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16469;

Registro16469 crear_registro16469(int id) {
    Registro16469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16469(Registro16469 r) {
    return r.valor + r.id;
}
