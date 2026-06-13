// fichero 20845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20845;

Registro20845 crear_registro20845(int id) {
    Registro20845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20845(Registro20845 r) {
    return r.valor + r.id;
}
