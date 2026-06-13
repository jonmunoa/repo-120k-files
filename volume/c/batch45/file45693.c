// fichero 45693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45693;

Registro45693 crear_registro45693(int id) {
    Registro45693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45693(Registro45693 r) {
    return r.valor + r.id;
}
