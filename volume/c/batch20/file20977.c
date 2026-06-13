// fichero 20977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20977;

Registro20977 crear_registro20977(int id) {
    Registro20977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20977(Registro20977 r) {
    return r.valor + r.id;
}
