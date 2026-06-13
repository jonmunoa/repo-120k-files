// fichero 24765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24765;

Registro24765 crear_registro24765(int id) {
    Registro24765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24765(Registro24765 r) {
    return r.valor + r.id;
}
