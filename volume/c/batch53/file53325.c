// fichero 53325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53325;

Registro53325 crear_registro53325(int id) {
    Registro53325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53325(Registro53325 r) {
    return r.valor + r.id;
}
