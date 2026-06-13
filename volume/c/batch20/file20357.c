// fichero 20357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20357;

Registro20357 crear_registro20357(int id) {
    Registro20357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20357(Registro20357 r) {
    return r.valor + r.id;
}
