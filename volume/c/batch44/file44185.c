// fichero 44185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44185;

Registro44185 crear_registro44185(int id) {
    Registro44185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44185(Registro44185 r) {
    return r.valor + r.id;
}
