// fichero 46649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46649;

Registro46649 crear_registro46649(int id) {
    Registro46649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46649(Registro46649 r) {
    return r.valor + r.id;
}
