// fichero 805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro805;

Registro805 crear_registro805(int id) {
    Registro805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro805(Registro805 r) {
    return r.valor + r.id;
}
