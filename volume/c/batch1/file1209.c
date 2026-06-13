// fichero 1209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1209;

Registro1209 crear_registro1209(int id) {
    Registro1209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1209(Registro1209 r) {
    return r.valor + r.id;
}
