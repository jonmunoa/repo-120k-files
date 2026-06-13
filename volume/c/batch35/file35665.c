// fichero 35665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35665;

Registro35665 crear_registro35665(int id) {
    Registro35665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35665(Registro35665 r) {
    return r.valor + r.id;
}
