// fichero 44505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44505;

Registro44505 crear_registro44505(int id) {
    Registro44505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44505(Registro44505 r) {
    return r.valor + r.id;
}
