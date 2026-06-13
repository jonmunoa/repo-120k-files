// fichero 34469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34469;

Registro34469 crear_registro34469(int id) {
    Registro34469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34469(Registro34469 r) {
    return r.valor + r.id;
}
