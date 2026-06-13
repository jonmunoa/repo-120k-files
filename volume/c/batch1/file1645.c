// fichero 1645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1645;

Registro1645 crear_registro1645(int id) {
    Registro1645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1645(Registro1645 r) {
    return r.valor + r.id;
}
