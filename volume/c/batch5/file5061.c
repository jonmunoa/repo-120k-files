// fichero 5061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5061;

Registro5061 crear_registro5061(int id) {
    Registro5061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5061(Registro5061 r) {
    return r.valor + r.id;
}
