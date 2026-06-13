// fichero 14493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14493;

Registro14493 crear_registro14493(int id) {
    Registro14493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14493(Registro14493 r) {
    return r.valor + r.id;
}
