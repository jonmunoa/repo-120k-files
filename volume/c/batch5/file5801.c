// fichero 5801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5801;

Registro5801 crear_registro5801(int id) {
    Registro5801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5801(Registro5801 r) {
    return r.valor + r.id;
}
