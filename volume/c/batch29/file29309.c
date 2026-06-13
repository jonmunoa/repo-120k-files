// fichero 29309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29309;

Registro29309 crear_registro29309(int id) {
    Registro29309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29309(Registro29309 r) {
    return r.valor + r.id;
}
