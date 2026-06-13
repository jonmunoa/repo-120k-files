// fichero 30753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30753;

Registro30753 crear_registro30753(int id) {
    Registro30753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30753(Registro30753 r) {
    return r.valor + r.id;
}
