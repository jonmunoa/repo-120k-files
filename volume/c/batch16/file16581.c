// fichero 16581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16581;

Registro16581 crear_registro16581(int id) {
    Registro16581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16581(Registro16581 r) {
    return r.valor + r.id;
}
