// fichero 5185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5185;

Registro5185 crear_registro5185(int id) {
    Registro5185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5185(Registro5185 r) {
    return r.valor + r.id;
}
