// fichero 24309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24309;

Registro24309 crear_registro24309(int id) {
    Registro24309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24309(Registro24309 r) {
    return r.valor + r.id;
}
