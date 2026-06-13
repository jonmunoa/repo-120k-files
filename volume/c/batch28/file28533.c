// fichero 28533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28533;

Registro28533 crear_registro28533(int id) {
    Registro28533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28533(Registro28533 r) {
    return r.valor + r.id;
}
