// fichero 29961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29961;

Registro29961 crear_registro29961(int id) {
    Registro29961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29961(Registro29961 r) {
    return r.valor + r.id;
}
