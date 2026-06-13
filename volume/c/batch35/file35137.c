// fichero 35137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35137;

Registro35137 crear_registro35137(int id) {
    Registro35137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35137(Registro35137 r) {
    return r.valor + r.id;
}
