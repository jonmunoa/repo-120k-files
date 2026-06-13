// fichero 52565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52565;

Registro52565 crear_registro52565(int id) {
    Registro52565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52565(Registro52565 r) {
    return r.valor + r.id;
}
