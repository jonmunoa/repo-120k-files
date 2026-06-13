// fichero 5493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5493;

Registro5493 crear_registro5493(int id) {
    Registro5493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5493(Registro5493 r) {
    return r.valor + r.id;
}
