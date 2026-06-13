// fichero 53697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53697;

Registro53697 crear_registro53697(int id) {
    Registro53697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53697(Registro53697 r) {
    return r.valor + r.id;
}
