// fichero 17813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17813;

Registro17813 crear_registro17813(int id) {
    Registro17813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17813(Registro17813 r) {
    return r.valor + r.id;
}
