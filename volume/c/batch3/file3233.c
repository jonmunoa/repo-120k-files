// fichero 3233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3233;

Registro3233 crear_registro3233(int id) {
    Registro3233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3233(Registro3233 r) {
    return r.valor + r.id;
}
