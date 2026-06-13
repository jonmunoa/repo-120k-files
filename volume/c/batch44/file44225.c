// fichero 44225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44225;

Registro44225 crear_registro44225(int id) {
    Registro44225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44225(Registro44225 r) {
    return r.valor + r.id;
}
