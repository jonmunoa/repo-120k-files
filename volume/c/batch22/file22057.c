// fichero 22057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22057;

Registro22057 crear_registro22057(int id) {
    Registro22057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22057(Registro22057 r) {
    return r.valor + r.id;
}
