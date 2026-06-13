// fichero 14741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14741;

Registro14741 crear_registro14741(int id) {
    Registro14741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14741(Registro14741 r) {
    return r.valor + r.id;
}
