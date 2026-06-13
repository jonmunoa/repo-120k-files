// fichero 20933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20933;

Registro20933 crear_registro20933(int id) {
    Registro20933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20933(Registro20933 r) {
    return r.valor + r.id;
}
