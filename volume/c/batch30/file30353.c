// fichero 30353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30353;

Registro30353 crear_registro30353(int id) {
    Registro30353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30353(Registro30353 r) {
    return r.valor + r.id;
}
