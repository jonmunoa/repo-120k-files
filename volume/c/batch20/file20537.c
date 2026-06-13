// fichero 20537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20537;

Registro20537 crear_registro20537(int id) {
    Registro20537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20537(Registro20537 r) {
    return r.valor + r.id;
}
