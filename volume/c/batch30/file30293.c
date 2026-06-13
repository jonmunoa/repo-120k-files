// fichero 30293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30293;

Registro30293 crear_registro30293(int id) {
    Registro30293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30293(Registro30293 r) {
    return r.valor + r.id;
}
