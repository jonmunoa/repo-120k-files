// fichero 1573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1573;

Registro1573 crear_registro1573(int id) {
    Registro1573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1573(Registro1573 r) {
    return r.valor + r.id;
}
