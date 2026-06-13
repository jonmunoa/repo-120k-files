// fichero 16745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16745;

Registro16745 crear_registro16745(int id) {
    Registro16745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16745(Registro16745 r) {
    return r.valor + r.id;
}
