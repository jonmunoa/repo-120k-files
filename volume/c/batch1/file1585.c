// fichero 1585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1585;

Registro1585 crear_registro1585(int id) {
    Registro1585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1585(Registro1585 r) {
    return r.valor + r.id;
}
