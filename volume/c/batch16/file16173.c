// fichero 16173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16173;

Registro16173 crear_registro16173(int id) {
    Registro16173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16173(Registro16173 r) {
    return r.valor + r.id;
}
