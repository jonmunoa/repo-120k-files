// fichero 32693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32693;

Registro32693 crear_registro32693(int id) {
    Registro32693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32693(Registro32693 r) {
    return r.valor + r.id;
}
