// fichero 53149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53149;

Registro53149 crear_registro53149(int id) {
    Registro53149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53149(Registro53149 r) {
    return r.valor + r.id;
}
