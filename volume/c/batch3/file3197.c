// fichero 3197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3197;

Registro3197 crear_registro3197(int id) {
    Registro3197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3197(Registro3197 r) {
    return r.valor + r.id;
}
