// fichero 9605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9605;

Registro9605 crear_registro9605(int id) {
    Registro9605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9605(Registro9605 r) {
    return r.valor + r.id;
}
