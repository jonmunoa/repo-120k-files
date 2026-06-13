// fichero 3417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3417;

Registro3417 crear_registro3417(int id) {
    Registro3417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3417(Registro3417 r) {
    return r.valor + r.id;
}
