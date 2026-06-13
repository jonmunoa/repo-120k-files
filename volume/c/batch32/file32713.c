// fichero 32713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32713;

Registro32713 crear_registro32713(int id) {
    Registro32713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32713(Registro32713 r) {
    return r.valor + r.id;
}
