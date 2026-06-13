// fichero 21493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21493;

Registro21493 crear_registro21493(int id) {
    Registro21493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21493(Registro21493 r) {
    return r.valor + r.id;
}
