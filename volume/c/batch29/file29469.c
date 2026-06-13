// fichero 29469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29469;

Registro29469 crear_registro29469(int id) {
    Registro29469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29469(Registro29469 r) {
    return r.valor + r.id;
}
