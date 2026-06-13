// fichero 30657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30657;

Registro30657 crear_registro30657(int id) {
    Registro30657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30657(Registro30657 r) {
    return r.valor + r.id;
}
