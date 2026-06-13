// fichero 7977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7977;

Registro7977 crear_registro7977(int id) {
    Registro7977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7977(Registro7977 r) {
    return r.valor + r.id;
}
