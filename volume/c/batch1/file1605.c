// fichero 1605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1605;

Registro1605 crear_registro1605(int id) {
    Registro1605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1605(Registro1605 r) {
    return r.valor + r.id;
}
