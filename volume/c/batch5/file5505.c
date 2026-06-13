// fichero 5505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5505;

Registro5505 crear_registro5505(int id) {
    Registro5505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5505(Registro5505 r) {
    return r.valor + r.id;
}
