// fichero 22697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22697;

Registro22697 crear_registro22697(int id) {
    Registro22697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22697(Registro22697 r) {
    return r.valor + r.id;
}
