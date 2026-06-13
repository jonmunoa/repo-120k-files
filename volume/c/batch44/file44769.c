// fichero 44769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44769;

Registro44769 crear_registro44769(int id) {
    Registro44769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44769(Registro44769 r) {
    return r.valor + r.id;
}
