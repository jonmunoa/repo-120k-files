// fichero 44433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44433;

Registro44433 crear_registro44433(int id) {
    Registro44433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44433(Registro44433 r) {
    return r.valor + r.id;
}
