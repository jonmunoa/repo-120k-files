// fichero 29557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29557;

Registro29557 crear_registro29557(int id) {
    Registro29557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29557(Registro29557 r) {
    return r.valor + r.id;
}
