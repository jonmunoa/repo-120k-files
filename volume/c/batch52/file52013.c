// fichero 52013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52013;

Registro52013 crear_registro52013(int id) {
    Registro52013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52013(Registro52013 r) {
    return r.valor + r.id;
}
