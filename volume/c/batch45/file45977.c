// fichero 45977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45977;

Registro45977 crear_registro45977(int id) {
    Registro45977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45977(Registro45977 r) {
    return r.valor + r.id;
}
