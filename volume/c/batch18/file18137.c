// fichero 18137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18137;

Registro18137 crear_registro18137(int id) {
    Registro18137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18137(Registro18137 r) {
    return r.valor + r.id;
}
