// fichero 5557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5557;

Registro5557 crear_registro5557(int id) {
    Registro5557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5557(Registro5557 r) {
    return r.valor + r.id;
}
