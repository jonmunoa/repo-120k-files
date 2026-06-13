// fichero 21565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21565;

Registro21565 crear_registro21565(int id) {
    Registro21565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21565(Registro21565 r) {
    return r.valor + r.id;
}
