// fichero 36549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36549;

Registro36549 crear_registro36549(int id) {
    Registro36549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36549(Registro36549 r) {
    return r.valor + r.id;
}
