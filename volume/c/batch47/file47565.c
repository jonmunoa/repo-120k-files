// fichero 47565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47565;

Registro47565 crear_registro47565(int id) {
    Registro47565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47565(Registro47565 r) {
    return r.valor + r.id;
}
