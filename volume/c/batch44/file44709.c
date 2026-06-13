// fichero 44709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44709;

Registro44709 crear_registro44709(int id) {
    Registro44709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44709(Registro44709 r) {
    return r.valor + r.id;
}
