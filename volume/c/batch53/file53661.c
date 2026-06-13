// fichero 53661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53661;

Registro53661 crear_registro53661(int id) {
    Registro53661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53661(Registro53661 r) {
    return r.valor + r.id;
}
