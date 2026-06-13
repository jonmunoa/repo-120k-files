// fichero 1661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1661;

Registro1661 crear_registro1661(int id) {
    Registro1661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1661(Registro1661 r) {
    return r.valor + r.id;
}
