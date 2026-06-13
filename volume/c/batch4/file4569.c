// fichero 4569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4569;

Registro4569 crear_registro4569(int id) {
    Registro4569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4569(Registro4569 r) {
    return r.valor + r.id;
}
