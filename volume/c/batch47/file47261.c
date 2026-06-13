// fichero 47261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47261;

Registro47261 crear_registro47261(int id) {
    Registro47261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47261(Registro47261 r) {
    return r.valor + r.id;
}
