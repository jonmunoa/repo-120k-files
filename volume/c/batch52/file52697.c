// fichero 52697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52697;

Registro52697 crear_registro52697(int id) {
    Registro52697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52697(Registro52697 r) {
    return r.valor + r.id;
}
