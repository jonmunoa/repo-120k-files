// fichero 30669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30669;

Registro30669 crear_registro30669(int id) {
    Registro30669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30669(Registro30669 r) {
    return r.valor + r.id;
}
