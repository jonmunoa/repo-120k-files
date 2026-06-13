// fichero 28181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28181;

Registro28181 crear_registro28181(int id) {
    Registro28181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28181(Registro28181 r) {
    return r.valor + r.id;
}
