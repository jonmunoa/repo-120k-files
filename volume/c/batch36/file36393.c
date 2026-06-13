// fichero 36393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36393;

Registro36393 crear_registro36393(int id) {
    Registro36393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36393(Registro36393 r) {
    return r.valor + r.id;
}
