// fichero 30137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30137;

Registro30137 crear_registro30137(int id) {
    Registro30137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30137(Registro30137 r) {
    return r.valor + r.id;
}
