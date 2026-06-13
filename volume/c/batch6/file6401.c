// fichero 6401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6401;

Registro6401 crear_registro6401(int id) {
    Registro6401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6401(Registro6401 r) {
    return r.valor + r.id;
}
