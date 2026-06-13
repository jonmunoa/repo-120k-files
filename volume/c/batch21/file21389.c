// fichero 21389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21389;

Registro21389 crear_registro21389(int id) {
    Registro21389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21389(Registro21389 r) {
    return r.valor + r.id;
}
