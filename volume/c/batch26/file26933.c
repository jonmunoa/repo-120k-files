// fichero 26933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26933;

Registro26933 crear_registro26933(int id) {
    Registro26933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26933(Registro26933 r) {
    return r.valor + r.id;
}
