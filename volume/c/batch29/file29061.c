// fichero 29061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29061;

Registro29061 crear_registro29061(int id) {
    Registro29061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29061(Registro29061 r) {
    return r.valor + r.id;
}
