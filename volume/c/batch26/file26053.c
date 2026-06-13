// fichero 26053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26053;

Registro26053 crear_registro26053(int id) {
    Registro26053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26053(Registro26053 r) {
    return r.valor + r.id;
}
