// fichero 7769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7769;

Registro7769 crear_registro7769(int id) {
    Registro7769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7769(Registro7769 r) {
    return r.valor + r.id;
}
