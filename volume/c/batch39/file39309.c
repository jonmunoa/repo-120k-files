// fichero 39309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39309;

Registro39309 crear_registro39309(int id) {
    Registro39309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39309(Registro39309 r) {
    return r.valor + r.id;
}
