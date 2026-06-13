// fichero 38805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38805;

Registro38805 crear_registro38805(int id) {
    Registro38805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38805(Registro38805 r) {
    return r.valor + r.id;
}
