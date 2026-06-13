// fichero 5565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5565;

Registro5565 crear_registro5565(int id) {
    Registro5565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5565(Registro5565 r) {
    return r.valor + r.id;
}
