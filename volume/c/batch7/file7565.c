// fichero 7565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7565;

Registro7565 crear_registro7565(int id) {
    Registro7565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7565(Registro7565 r) {
    return r.valor + r.id;
}
