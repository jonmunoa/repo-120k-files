// fichero 53977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53977;

Registro53977 crear_registro53977(int id) {
    Registro53977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53977(Registro53977 r) {
    return r.valor + r.id;
}
