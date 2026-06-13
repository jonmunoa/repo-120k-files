// fichero 32741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32741;

Registro32741 crear_registro32741(int id) {
    Registro32741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32741(Registro32741 r) {
    return r.valor + r.id;
}
