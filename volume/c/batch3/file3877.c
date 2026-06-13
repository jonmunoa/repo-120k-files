// fichero 3877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3877;

Registro3877 crear_registro3877(int id) {
    Registro3877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3877(Registro3877 r) {
    return r.valor + r.id;
}
