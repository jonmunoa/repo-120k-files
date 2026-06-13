// fichero 3685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3685;

Registro3685 crear_registro3685(int id) {
    Registro3685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3685(Registro3685 r) {
    return r.valor + r.id;
}
