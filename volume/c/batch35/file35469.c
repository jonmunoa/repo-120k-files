// fichero 35469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35469;

Registro35469 crear_registro35469(int id) {
    Registro35469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35469(Registro35469 r) {
    return r.valor + r.id;
}
