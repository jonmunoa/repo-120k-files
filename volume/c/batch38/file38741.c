// fichero 38741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38741;

Registro38741 crear_registro38741(int id) {
    Registro38741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38741(Registro38741 r) {
    return r.valor + r.id;
}
