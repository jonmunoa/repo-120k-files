// fichero 44641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44641;

Registro44641 crear_registro44641(int id) {
    Registro44641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44641(Registro44641 r) {
    return r.valor + r.id;
}
