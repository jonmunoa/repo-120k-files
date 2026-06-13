// fichero 3317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3317;

Registro3317 crear_registro3317(int id) {
    Registro3317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3317(Registro3317 r) {
    return r.valor + r.id;
}
