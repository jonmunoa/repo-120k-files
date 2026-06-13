// fichero 6969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6969;

Registro6969 crear_registro6969(int id) {
    Registro6969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6969(Registro6969 r) {
    return r.valor + r.id;
}
