// fichero 34033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34033;

Registro34033 crear_registro34033(int id) {
    Registro34033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34033(Registro34033 r) {
    return r.valor + r.id;
}
