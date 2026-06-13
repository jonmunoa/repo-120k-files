// fichero 30017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30017;

Registro30017 crear_registro30017(int id) {
    Registro30017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30017(Registro30017 r) {
    return r.valor + r.id;
}
