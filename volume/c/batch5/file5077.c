// fichero 5077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5077;

Registro5077 crear_registro5077(int id) {
    Registro5077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5077(Registro5077 r) {
    return r.valor + r.id;
}
