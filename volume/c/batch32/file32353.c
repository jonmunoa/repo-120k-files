// fichero 32353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32353;

Registro32353 crear_registro32353(int id) {
    Registro32353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32353(Registro32353 r) {
    return r.valor + r.id;
}
