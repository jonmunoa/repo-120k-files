// fichero 20697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20697;

Registro20697 crear_registro20697(int id) {
    Registro20697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20697(Registro20697 r) {
    return r.valor + r.id;
}
