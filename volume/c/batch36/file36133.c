// fichero 36133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36133;

Registro36133 crear_registro36133(int id) {
    Registro36133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36133(Registro36133 r) {
    return r.valor + r.id;
}
