// fichero 52933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52933;

Registro52933 crear_registro52933(int id) {
    Registro52933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52933(Registro52933 r) {
    return r.valor + r.id;
}
