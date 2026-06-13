// fichero 533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro533;

Registro533 crear_registro533(int id) {
    Registro533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro533(Registro533 r) {
    return r.valor + r.id;
}
