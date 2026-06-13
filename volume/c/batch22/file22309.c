// fichero 22309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22309;

Registro22309 crear_registro22309(int id) {
    Registro22309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22309(Registro22309 r) {
    return r.valor + r.id;
}
