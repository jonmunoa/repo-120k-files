// fichero 28933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28933;

Registro28933 crear_registro28933(int id) {
    Registro28933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28933(Registro28933 r) {
    return r.valor + r.id;
}
