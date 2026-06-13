// fichero 6469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6469;

Registro6469 crear_registro6469(int id) {
    Registro6469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6469(Registro6469 r) {
    return r.valor + r.id;
}
