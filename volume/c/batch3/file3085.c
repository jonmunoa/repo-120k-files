// fichero 3085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3085;

Registro3085 crear_registro3085(int id) {
    Registro3085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3085(Registro3085 r) {
    return r.valor + r.id;
}
