// fichero 53973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53973;

Registro53973 crear_registro53973(int id) {
    Registro53973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53973(Registro53973 r) {
    return r.valor + r.id;
}
