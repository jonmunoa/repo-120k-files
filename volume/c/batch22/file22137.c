// fichero 22137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22137;

Registro22137 crear_registro22137(int id) {
    Registro22137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22137(Registro22137 r) {
    return r.valor + r.id;
}
