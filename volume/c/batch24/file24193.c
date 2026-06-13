// fichero 24193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24193;

Registro24193 crear_registro24193(int id) {
    Registro24193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24193(Registro24193 r) {
    return r.valor + r.id;
}
