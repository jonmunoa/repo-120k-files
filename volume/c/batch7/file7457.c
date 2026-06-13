// fichero 7457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7457;

Registro7457 crear_registro7457(int id) {
    Registro7457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7457(Registro7457 r) {
    return r.valor + r.id;
}
