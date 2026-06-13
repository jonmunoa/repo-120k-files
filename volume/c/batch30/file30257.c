// fichero 30257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30257;

Registro30257 crear_registro30257(int id) {
    Registro30257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30257(Registro30257 r) {
    return r.valor + r.id;
}
