// fichero 52813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52813;

Registro52813 crear_registro52813(int id) {
    Registro52813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52813(Registro52813 r) {
    return r.valor + r.id;
}
