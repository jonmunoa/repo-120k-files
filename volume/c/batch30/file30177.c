// fichero 30177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30177;

Registro30177 crear_registro30177(int id) {
    Registro30177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30177(Registro30177 r) {
    return r.valor + r.id;
}
