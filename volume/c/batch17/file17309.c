// fichero 17309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17309;

Registro17309 crear_registro17309(int id) {
    Registro17309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17309(Registro17309 r) {
    return r.valor + r.id;
}
