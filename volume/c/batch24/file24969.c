// fichero 24969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24969;

Registro24969 crear_registro24969(int id) {
    Registro24969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24969(Registro24969 r) {
    return r.valor + r.id;
}
