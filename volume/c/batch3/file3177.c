// fichero 3177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3177;

Registro3177 crear_registro3177(int id) {
    Registro3177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3177(Registro3177 r) {
    return r.valor + r.id;
}
