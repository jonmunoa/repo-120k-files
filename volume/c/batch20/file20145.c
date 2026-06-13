// fichero 20145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20145;

Registro20145 crear_registro20145(int id) {
    Registro20145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20145(Registro20145 r) {
    return r.valor + r.id;
}
