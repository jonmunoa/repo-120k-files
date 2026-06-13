// fichero 39953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39953;

Registro39953 crear_registro39953(int id) {
    Registro39953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39953(Registro39953 r) {
    return r.valor + r.id;
}
