// fichero 26557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26557;

Registro26557 crear_registro26557(int id) {
    Registro26557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26557(Registro26557 r) {
    return r.valor + r.id;
}
