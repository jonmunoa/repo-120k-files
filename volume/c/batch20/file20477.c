// fichero 20477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20477;

Registro20477 crear_registro20477(int id) {
    Registro20477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20477(Registro20477 r) {
    return r.valor + r.id;
}
