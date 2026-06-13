// fichero 35233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35233;

Registro35233 crear_registro35233(int id) {
    Registro35233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35233(Registro35233 r) {
    return r.valor + r.id;
}
