// fichero 36733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36733;

Registro36733 crear_registro36733(int id) {
    Registro36733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36733(Registro36733 r) {
    return r.valor + r.id;
}
