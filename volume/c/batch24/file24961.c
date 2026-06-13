// fichero 24961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24961;

Registro24961 crear_registro24961(int id) {
    Registro24961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24961(Registro24961 r) {
    return r.valor + r.id;
}
