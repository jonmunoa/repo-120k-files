// fichero 38785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38785;

Registro38785 crear_registro38785(int id) {
    Registro38785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38785(Registro38785 r) {
    return r.valor + r.id;
}
