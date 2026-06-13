// fichero 3261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3261;

Registro3261 crear_registro3261(int id) {
    Registro3261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3261(Registro3261 r) {
    return r.valor + r.id;
}
