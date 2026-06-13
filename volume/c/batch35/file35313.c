// fichero 35313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35313;

Registro35313 crear_registro35313(int id) {
    Registro35313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35313(Registro35313 r) {
    return r.valor + r.id;
}
