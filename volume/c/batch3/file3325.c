// fichero 3325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3325;

Registro3325 crear_registro3325(int id) {
    Registro3325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3325(Registro3325 r) {
    return r.valor + r.id;
}
