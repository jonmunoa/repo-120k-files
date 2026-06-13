// fichero 43309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43309;

Registro43309 crear_registro43309(int id) {
    Registro43309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43309(Registro43309 r) {
    return r.valor + r.id;
}
