// fichero 44493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44493;

Registro44493 crear_registro44493(int id) {
    Registro44493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44493(Registro44493 r) {
    return r.valor + r.id;
}
