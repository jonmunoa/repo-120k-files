// fichero 3293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3293;

Registro3293 crear_registro3293(int id) {
    Registro3293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3293(Registro3293 r) {
    return r.valor + r.id;
}
