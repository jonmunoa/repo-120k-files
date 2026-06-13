// fichero 26173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26173;

Registro26173 crear_registro26173(int id) {
    Registro26173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26173(Registro26173 r) {
    return r.valor + r.id;
}
