// fichero 36353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36353;

Registro36353 crear_registro36353(int id) {
    Registro36353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36353(Registro36353 r) {
    return r.valor + r.id;
}
