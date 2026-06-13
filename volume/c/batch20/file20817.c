// fichero 20817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20817;

Registro20817 crear_registro20817(int id) {
    Registro20817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20817(Registro20817 r) {
    return r.valor + r.id;
}
