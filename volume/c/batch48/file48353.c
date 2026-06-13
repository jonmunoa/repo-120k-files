// fichero 48353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48353;

Registro48353 crear_registro48353(int id) {
    Registro48353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48353(Registro48353 r) {
    return r.valor + r.id;
}
