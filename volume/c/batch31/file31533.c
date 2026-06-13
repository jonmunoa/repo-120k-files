// fichero 31533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31533;

Registro31533 crear_registro31533(int id) {
    Registro31533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31533(Registro31533 r) {
    return r.valor + r.id;
}
