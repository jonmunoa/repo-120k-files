// fichero 46309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46309;

Registro46309 crear_registro46309(int id) {
    Registro46309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46309(Registro46309 r) {
    return r.valor + r.id;
}
