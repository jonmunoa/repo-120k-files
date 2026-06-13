// fichero 3025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3025;

Registro3025 crear_registro3025(int id) {
    Registro3025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3025(Registro3025 r) {
    return r.valor + r.id;
}
