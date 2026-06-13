// fichero 24569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24569;

Registro24569 crear_registro24569(int id) {
    Registro24569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24569(Registro24569 r) {
    return r.valor + r.id;
}
