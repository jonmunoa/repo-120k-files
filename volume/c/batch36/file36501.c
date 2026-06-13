// fichero 36501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36501;

Registro36501 crear_registro36501(int id) {
    Registro36501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36501(Registro36501 r) {
    return r.valor + r.id;
}
