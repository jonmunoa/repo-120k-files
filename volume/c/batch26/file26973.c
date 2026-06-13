// fichero 26973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26973;

Registro26973 crear_registro26973(int id) {
    Registro26973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26973(Registro26973 r) {
    return r.valor + r.id;
}
