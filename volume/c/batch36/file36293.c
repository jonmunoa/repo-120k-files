// fichero 36293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36293;

Registro36293 crear_registro36293(int id) {
    Registro36293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36293(Registro36293 r) {
    return r.valor + r.id;
}
