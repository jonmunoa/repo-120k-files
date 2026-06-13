// fichero 34177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34177;

Registro34177 crear_registro34177(int id) {
    Registro34177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34177(Registro34177 r) {
    return r.valor + r.id;
}
