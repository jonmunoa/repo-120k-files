// fichero 37309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37309;

Registro37309 crear_registro37309(int id) {
    Registro37309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37309(Registro37309 r) {
    return r.valor + r.id;
}
