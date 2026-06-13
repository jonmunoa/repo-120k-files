// fichero 24585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24585;

Registro24585 crear_registro24585(int id) {
    Registro24585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24585(Registro24585 r) {
    return r.valor + r.id;
}
