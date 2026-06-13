// fichero 565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro565;

Registro565 crear_registro565(int id) {
    Registro565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro565(Registro565 r) {
    return r.valor + r.id;
}
