// fichero 39977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39977;

Registro39977 crear_registro39977(int id) {
    Registro39977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39977(Registro39977 r) {
    return r.valor + r.id;
}
