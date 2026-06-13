// fichero 24469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24469;

Registro24469 crear_registro24469(int id) {
    Registro24469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24469(Registro24469 r) {
    return r.valor + r.id;
}
