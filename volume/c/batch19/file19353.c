// fichero 19353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19353;

Registro19353 crear_registro19353(int id) {
    Registro19353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19353(Registro19353 r) {
    return r.valor + r.id;
}
