// fichero 5233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5233;

Registro5233 crear_registro5233(int id) {
    Registro5233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5233(Registro5233 r) {
    return r.valor + r.id;
}
