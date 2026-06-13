// fichero 15981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15981;

Registro15981 crear_registro15981(int id) {
    Registro15981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15981(Registro15981 r) {
    return r.valor + r.id;
}
