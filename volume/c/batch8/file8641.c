// fichero 8641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8641;

Registro8641 crear_registro8641(int id) {
    Registro8641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8641(Registro8641 r) {
    return r.valor + r.id;
}
