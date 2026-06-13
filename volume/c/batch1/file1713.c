// fichero 1713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1713;

Registro1713 crear_registro1713(int id) {
    Registro1713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1713(Registro1713 r) {
    return r.valor + r.id;
}
