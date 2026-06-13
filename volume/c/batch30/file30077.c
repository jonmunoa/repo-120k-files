// fichero 30077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30077;

Registro30077 crear_registro30077(int id) {
    Registro30077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30077(Registro30077 r) {
    return r.valor + r.id;
}
