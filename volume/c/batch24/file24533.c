// fichero 24533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24533;

Registro24533 crear_registro24533(int id) {
    Registro24533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24533(Registro24533 r) {
    return r.valor + r.id;
}
