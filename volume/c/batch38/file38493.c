// fichero 38493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38493;

Registro38493 crear_registro38493(int id) {
    Registro38493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38493(Registro38493 r) {
    return r.valor + r.id;
}
