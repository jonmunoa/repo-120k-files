// fichero 3157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3157;

Registro3157 crear_registro3157(int id) {
    Registro3157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3157(Registro3157 r) {
    return r.valor + r.id;
}
