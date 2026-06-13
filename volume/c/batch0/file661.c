// fichero 661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro661;

Registro661 crear_registro661(int id) {
    Registro661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro661(Registro661 r) {
    return r.valor + r.id;
}
