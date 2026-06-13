// fichero 32225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32225;

Registro32225 crear_registro32225(int id) {
    Registro32225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32225(Registro32225 r) {
    return r.valor + r.id;
}
