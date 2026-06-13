// fichero 5957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5957;

Registro5957 crear_registro5957(int id) {
    Registro5957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5957(Registro5957 r) {
    return r.valor + r.id;
}
