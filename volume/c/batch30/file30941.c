// fichero 30941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30941;

Registro30941 crear_registro30941(int id) {
    Registro30941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30941(Registro30941 r) {
    return r.valor + r.id;
}
