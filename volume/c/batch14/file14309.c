// fichero 14309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14309;

Registro14309 crear_registro14309(int id) {
    Registro14309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14309(Registro14309 r) {
    return r.valor + r.id;
}
