// fichero 27353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27353;

Registro27353 crear_registro27353(int id) {
    Registro27353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27353(Registro27353 r) {
    return r.valor + r.id;
}
