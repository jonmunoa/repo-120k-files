// fichero 16569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16569;

Registro16569 crear_registro16569(int id) {
    Registro16569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16569(Registro16569 r) {
    return r.valor + r.id;
}
