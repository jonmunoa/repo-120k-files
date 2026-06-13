// fichero 38733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38733;

Registro38733 crear_registro38733(int id) {
    Registro38733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38733(Registro38733 r) {
    return r.valor + r.id;
}
