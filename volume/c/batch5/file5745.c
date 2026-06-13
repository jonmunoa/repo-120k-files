// fichero 5745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5745;

Registro5745 crear_registro5745(int id) {
    Registro5745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5745(Registro5745 r) {
    return r.valor + r.id;
}
