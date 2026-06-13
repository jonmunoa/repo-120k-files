// fichero 15741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15741;

Registro15741 crear_registro15741(int id) {
    Registro15741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15741(Registro15741 r) {
    return r.valor + r.id;
}
