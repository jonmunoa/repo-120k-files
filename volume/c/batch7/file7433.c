// fichero 7433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7433;

Registro7433 crear_registro7433(int id) {
    Registro7433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7433(Registro7433 r) {
    return r.valor + r.id;
}
