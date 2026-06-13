// fichero 16085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16085;

Registro16085 crear_registro16085(int id) {
    Registro16085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16085(Registro16085 r) {
    return r.valor + r.id;
}
