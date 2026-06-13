// fichero 30765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30765;

Registro30765 crear_registro30765(int id) {
    Registro30765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30765(Registro30765 r) {
    return r.valor + r.id;
}
