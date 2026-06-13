// fichero 47761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47761;

Registro47761 crear_registro47761(int id) {
    Registro47761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47761(Registro47761 r) {
    return r.valor + r.id;
}
