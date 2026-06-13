// fichero 36309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36309;

Registro36309 crear_registro36309(int id) {
    Registro36309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36309(Registro36309 r) {
    return r.valor + r.id;
}
