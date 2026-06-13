// fichero 69 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro69;

Registro69 crear_registro69(int id) {
    Registro69 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro69(Registro69 r) {
    return r.valor + r.id;
}
