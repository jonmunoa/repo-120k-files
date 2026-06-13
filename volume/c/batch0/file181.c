// fichero 181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro181;

Registro181 crear_registro181(int id) {
    Registro181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro181(Registro181 r) {
    return r.valor + r.id;
}
