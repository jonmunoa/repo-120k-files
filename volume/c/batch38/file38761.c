// fichero 38761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38761;

Registro38761 crear_registro38761(int id) {
    Registro38761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38761(Registro38761 r) {
    return r.valor + r.id;
}
