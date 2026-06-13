// fichero 16309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16309;

Registro16309 crear_registro16309(int id) {
    Registro16309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16309(Registro16309 r) {
    return r.valor + r.id;
}
