// fichero 5933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5933;

Registro5933 crear_registro5933(int id) {
    Registro5933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5933(Registro5933 r) {
    return r.valor + r.id;
}
