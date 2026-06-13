// fichero 1309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1309;

Registro1309 crear_registro1309(int id) {
    Registro1309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1309(Registro1309 r) {
    return r.valor + r.id;
}
