// fichero 1525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1525;

Registro1525 crear_registro1525(int id) {
    Registro1525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1525(Registro1525 r) {
    return r.valor + r.id;
}
