// fichero 7377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7377;

Registro7377 crear_registro7377(int id) {
    Registro7377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7377(Registro7377 r) {
    return r.valor + r.id;
}
