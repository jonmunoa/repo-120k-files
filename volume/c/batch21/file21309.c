// fichero 21309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21309;

Registro21309 crear_registro21309(int id) {
    Registro21309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21309(Registro21309 r) {
    return r.valor + r.id;
}
