// fichero 3601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3601;

Registro3601 crear_registro3601(int id) {
    Registro3601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3601(Registro3601 r) {
    return r.valor + r.id;
}
