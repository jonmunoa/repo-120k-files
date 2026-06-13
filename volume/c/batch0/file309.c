// fichero 309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro309;

Registro309 crear_registro309(int id) {
    Registro309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro309(Registro309 r) {
    return r.valor + r.id;
}
