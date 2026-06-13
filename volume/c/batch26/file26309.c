// fichero 26309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26309;

Registro26309 crear_registro26309(int id) {
    Registro26309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26309(Registro26309 r) {
    return r.valor + r.id;
}
