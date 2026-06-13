// fichero 15309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15309;

Registro15309 crear_registro15309(int id) {
    Registro15309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15309(Registro15309 r) {
    return r.valor + r.id;
}
