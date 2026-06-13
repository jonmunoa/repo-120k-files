// fichero 20605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20605;

Registro20605 crear_registro20605(int id) {
    Registro20605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20605(Registro20605 r) {
    return r.valor + r.id;
}
