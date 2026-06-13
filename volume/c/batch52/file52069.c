// fichero 52069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52069;

Registro52069 crear_registro52069(int id) {
    Registro52069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52069(Registro52069 r) {
    return r.valor + r.id;
}
