// fichero 31833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31833;

Registro31833 crear_registro31833(int id) {
    Registro31833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31833(Registro31833 r) {
    return r.valor + r.id;
}
