// fichero 53257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53257;

Registro53257 crear_registro53257(int id) {
    Registro53257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53257(Registro53257 r) {
    return r.valor + r.id;
}
