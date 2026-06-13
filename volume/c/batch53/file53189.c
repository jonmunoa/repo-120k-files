// fichero 53189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53189;

Registro53189 crear_registro53189(int id) {
    Registro53189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53189(Registro53189 r) {
    return r.valor + r.id;
}
