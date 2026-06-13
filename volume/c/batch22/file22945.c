// fichero 22945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22945;

Registro22945 crear_registro22945(int id) {
    Registro22945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22945(Registro22945 r) {
    return r.valor + r.id;
}
