// fichero 20629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20629;

Registro20629 crear_registro20629(int id) {
    Registro20629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20629(Registro20629 r) {
    return r.valor + r.id;
}
