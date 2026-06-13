// fichero 6745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6745;

Registro6745 crear_registro6745(int id) {
    Registro6745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6745(Registro6745 r) {
    return r.valor + r.id;
}
