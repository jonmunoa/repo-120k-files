// fichero 5533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5533;

Registro5533 crear_registro5533(int id) {
    Registro5533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5533(Registro5533 r) {
    return r.valor + r.id;
}
