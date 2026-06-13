// fichero 52173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52173;

Registro52173 crear_registro52173(int id) {
    Registro52173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52173(Registro52173 r) {
    return r.valor + r.id;
}
