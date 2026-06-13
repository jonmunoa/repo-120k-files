// fichero 30961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30961;

Registro30961 crear_registro30961(int id) {
    Registro30961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30961(Registro30961 r) {
    return r.valor + r.id;
}
