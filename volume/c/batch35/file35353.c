// fichero 35353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35353;

Registro35353 crear_registro35353(int id) {
    Registro35353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35353(Registro35353 r) {
    return r.valor + r.id;
}
