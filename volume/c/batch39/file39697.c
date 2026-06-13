// fichero 39697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39697;

Registro39697 crear_registro39697(int id) {
    Registro39697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39697(Registro39697 r) {
    return r.valor + r.id;
}
