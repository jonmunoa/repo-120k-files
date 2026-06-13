// fichero 39345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39345;

Registro39345 crear_registro39345(int id) {
    Registro39345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39345(Registro39345 r) {
    return r.valor + r.id;
}
