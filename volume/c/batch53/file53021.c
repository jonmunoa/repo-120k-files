// fichero 53021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53021;

Registro53021 crear_registro53021(int id) {
    Registro53021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53021(Registro53021 r) {
    return r.valor + r.id;
}
