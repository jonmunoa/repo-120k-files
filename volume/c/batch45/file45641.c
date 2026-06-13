// fichero 45641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45641;

Registro45641 crear_registro45641(int id) {
    Registro45641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45641(Registro45641 r) {
    return r.valor + r.id;
}
