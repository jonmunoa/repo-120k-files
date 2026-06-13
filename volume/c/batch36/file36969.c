// fichero 36969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36969;

Registro36969 crear_registro36969(int id) {
    Registro36969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36969(Registro36969 r) {
    return r.valor + r.id;
}
