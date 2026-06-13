// fichero 44741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44741;

Registro44741 crear_registro44741(int id) {
    Registro44741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44741(Registro44741 r) {
    return r.valor + r.id;
}
