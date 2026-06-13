// fichero 33741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33741;

Registro33741 crear_registro33741(int id) {
    Registro33741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33741(Registro33741 r) {
    return r.valor + r.id;
}
