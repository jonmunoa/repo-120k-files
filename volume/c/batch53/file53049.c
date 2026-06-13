// fichero 53049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53049;

Registro53049 crear_registro53049(int id) {
    Registro53049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53049(Registro53049 r) {
    return r.valor + r.id;
}
