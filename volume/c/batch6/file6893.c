// fichero 6893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6893;

Registro6893 crear_registro6893(int id) {
    Registro6893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6893(Registro6893 r) {
    return r.valor + r.id;
}
