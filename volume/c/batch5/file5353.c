// fichero 5353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5353;

Registro5353 crear_registro5353(int id) {
    Registro5353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5353(Registro5353 r) {
    return r.valor + r.id;
}
