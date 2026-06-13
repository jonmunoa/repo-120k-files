// fichero 10293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10293;

Registro10293 crear_registro10293(int id) {
    Registro10293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10293(Registro10293 r) {
    return r.valor + r.id;
}
