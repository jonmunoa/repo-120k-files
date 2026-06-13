// fichero 22161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22161;

Registro22161 crear_registro22161(int id) {
    Registro22161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22161(Registro22161 r) {
    return r.valor + r.id;
}
