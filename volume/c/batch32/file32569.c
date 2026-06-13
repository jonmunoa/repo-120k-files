// fichero 32569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32569;

Registro32569 crear_registro32569(int id) {
    Registro32569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32569(Registro32569 r) {
    return r.valor + r.id;
}
