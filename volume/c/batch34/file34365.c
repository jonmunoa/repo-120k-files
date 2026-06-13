// fichero 34365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34365;

Registro34365 crear_registro34365(int id) {
    Registro34365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34365(Registro34365 r) {
    return r.valor + r.id;
}
