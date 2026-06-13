// fichero 36685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36685;

Registro36685 crear_registro36685(int id) {
    Registro36685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36685(Registro36685 r) {
    return r.valor + r.id;
}
