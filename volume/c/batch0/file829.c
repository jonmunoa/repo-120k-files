// fichero 829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro829;

Registro829 crear_registro829(int id) {
    Registro829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro829(Registro829 r) {
    return r.valor + r.id;
}
