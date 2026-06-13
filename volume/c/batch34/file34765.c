// fichero 34765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34765;

Registro34765 crear_registro34765(int id) {
    Registro34765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34765(Registro34765 r) {
    return r.valor + r.id;
}
