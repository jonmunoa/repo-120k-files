// fichero 34397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34397;

Registro34397 crear_registro34397(int id) {
    Registro34397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34397(Registro34397 r) {
    return r.valor + r.id;
}
