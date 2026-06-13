// fichero 35433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35433;

Registro35433 crear_registro35433(int id) {
    Registro35433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35433(Registro35433 r) {
    return r.valor + r.id;
}
