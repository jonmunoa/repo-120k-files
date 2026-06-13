// fichero 36389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36389;

Registro36389 crear_registro36389(int id) {
    Registro36389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36389(Registro36389 r) {
    return r.valor + r.id;
}
