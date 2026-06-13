// fichero 53969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53969;

Registro53969 crear_registro53969(int id) {
    Registro53969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53969(Registro53969 r) {
    return r.valor + r.id;
}
