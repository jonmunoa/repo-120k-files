// fichero 30313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30313;

Registro30313 crear_registro30313(int id) {
    Registro30313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30313(Registro30313 r) {
    return r.valor + r.id;
}
