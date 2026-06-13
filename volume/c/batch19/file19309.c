// fichero 19309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19309;

Registro19309 crear_registro19309(int id) {
    Registro19309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19309(Registro19309 r) {
    return r.valor + r.id;
}
